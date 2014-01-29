#include "Game.h"
#include "ResourceManager.h"
#include "Screen.h"

CGame::CGame(void)
{
	m_pHge = NULL;
	m_pFont = NULL;
	m_pResManager = NULL;
	m_pCurScreen = NULL;
	m_bSuspend = false;
	m_bGameOver = true;
}

CGame::~CGame(void)
{
}

bool CGame::InitGame()
{
	CreateWorld();
	m_pFont = new hgeFont("Resource/Font/font1.fnt");
	m_pResManager = new CResourceManager(this);
	
	return true;
}

void CGame::FrameFunc(float fDeltaTime)
{
	UpdateWorld(fDeltaTime);
	m_pCurScreen->Update(fDeltaTime);
}

void CGame::RenderFunc()
{
	m_pCurScreen->Render();
	//m_pFont->printf(5, 5, HGETEXT_LEFT, "dt:%.3f\nFPS:%d (constant)", m_pHge->Timer_GetDelta(), m_pHge->Timer_GetFPS());
	m_pWorld->DrawDebugData();
}

void CGame::Release()
{
	m_pResManager->Clear();
	m_pCurScreen = NULL;
	SAFE_DELETE(m_pFont);
	SAFE_DELETE(m_pResManager);
	SAFE_DELETE(m_pDraw);
	SAFE_DELETE(m_pWorld);
}

void CGame::CreateWorld(D3DXVECTOR3 gravity)
{
	b2Vec2 G(gravity.x,gravity.y);
	m_pWorld = new b2World(G);

	m_iVelocityIterations = 8;
	m_iPositionIterations = 3;
	m_fTimeStep = 1.0f/60.0f;
	m_fRemainTime = 0;

	float wallThick = 10;
	CreateBody(D3DXVECTOR3(SCREEN_WIDTH/2,0,0),SCREEN_WIDTH,wallThick,true);
	CreateBody(D3DXVECTOR3(SCREEN_WIDTH/2,SCREEN_HEIGHT,0),SCREEN_WIDTH,wallThick,true);
	CreateBody(D3DXVECTOR3(0,SCREEN_HEIGHT/2,0),wallThick,SCREEN_HEIGHT,true);
	CreateBody(D3DXVECTOR3(SCREEN_WIDTH,SCREEN_HEIGHT/2,0),wallThick,SCREEN_HEIGHT,true);
	
	m_pDraw = new CDebugDraw(m_pHge);
	m_pWorld->SetDebugDraw(m_pDraw);
	
}

void CGame::UpdateWorld(float fDeltaTime)
{
	m_fTotalTime = fDeltaTime + m_fRemainTime;
	while (m_fTotalTime >= m_fTimeStep)
	{
		m_pWorld->Step(m_fTimeStep, m_iVelocityIterations, m_iPositionIterations);
		m_fTotalTime-=m_fTimeStep;
	}
	m_fRemainTime = m_fTotalTime;

	m_pWorld->ClearForces();
	
	for (b2Body* body = m_pWorld->GetBodyList(); body; body = body->GetNext())
	{
		b2Vec2 screen;
		b2Vec2 position = body->GetPosition();
		float32 angle = body->GetAngle();
		WorldToScreen(&screen, &position);

		CSprite * pSprite = (CSprite * ) body->GetUserData();
		if (pSprite!=NULL)
		{
			pSprite->SetPos(D3DXVECTOR3(screen.x, screen.y, 0));
			pSprite->SetAngle(-angle);
		}
	}
}

b2Vec2 * CGame::WorldToScreen(b2Vec2 * pOut, const b2Vec2 * pIn)
{
	pOut->x = pIn->x / MeterPerPixel + m_fScreenWidth/2;
	pOut->y = pIn->y / (-MeterPerPixel) + m_fScreenHeight/2;
	return pOut;
}

b2Vec2 * CGame::ScreenToWorld(b2Vec2 * pOut, const b2Vec2 * pIn)
{
	pOut->x = (pIn->x - m_fScreenWidth/2) * MeterPerPixel;
	pOut->y = (pIn->y - m_fScreenHeight/2) * (-MeterPerPixel);
	return pOut;
}

b2Body * CGame::CreateBody(D3DXVECTOR3 vPos,float32 width,float32 height,bool isStatic,CSprite * pSpr,float density, float friction, float restitution)
{
	//1.定义物体
	b2Vec2 world,pos;
	pos.x = vPos.x;
	pos.y = vPos.y;
	ScreenToWorld(&world, &pos);
	b2BodyDef bodyRequest;
	bodyRequest.type = isStatic ? b2_staticBody : b2_dynamicBody;
	bodyRequest.position.Set(world.x,world.y);
	
	//2.创建物体
	b2Body * pBody = m_pWorld->CreateBody(&bodyRequest);

	//3.定义夹具
	b2PolygonShape * pShape = new b2PolygonShape();
	pShape->SetAsBox(PixelToMeter(width/2.0f), PixelToMeter(height/2.0f));

	b2FixtureDef fixtureDef;
	fixtureDef.shape = pShape;
	fixtureDef.density = density;
	fixtureDef.friction = friction;
	fixtureDef.restitution = restitution;
	
	//4.创建夹具
	pBody->CreateFixture(&fixtureDef);

	if (pSpr)
	{
		pBody->SetUserData(pSpr);
	}
	
	return pBody;
}

b2Body * CGame::CreateCircle(D3DXVECTOR3 vPos,float radius,bool isStatic,CSprite * pSpr,float density, float friction, float restitution)
{
	//1.定义物体
	b2Vec2 world,pos;
	pos.x = vPos.x;
	pos.y = vPos.y;
	ScreenToWorld(&world, &pos);
	b2BodyDef bodyRequest;
	bodyRequest.type = isStatic ? b2_staticBody : b2_dynamicBody;
	bodyRequest.position.Set(world.x,world.y);

	//2.创建物体
	b2Body * pBody = m_pWorld->CreateBody(&bodyRequest);

	//3.定义夹具
	b2CircleShape * pShape = new b2CircleShape();
	pShape->m_radius = PixelToMeter(radius);

	b2FixtureDef fixtureDef;
	fixtureDef.shape = pShape;
	fixtureDef.density = density;
	fixtureDef.friction = friction;
	fixtureDef.restitution = restitution;

	//4.创建夹具
	pBody->CreateFixture(&fixtureDef);

	if (pSpr)
	{
		pBody->SetUserData(pSpr);
	}

	return pBody;
}