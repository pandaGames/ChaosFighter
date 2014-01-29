#include "Mission.h"
#include "../MyGame.h"

CMission::CMission(CGame * pGame):CScreen(pGame)
{
	m_pPlayer = new CPlayer(m_pGame,m_pSprManager);
	m_pFont = new hgeFont("Resource/Font/font1.fnt");
	m_pParManager->CreateDefaultParticleSystem(7,D3DXVECTOR3(100,100,0));
	m_pGame->CreateBody(D3DXVECTOR3(500,390,0),200,20,true);
}

CMission::~CMission(void)
{
	SAFE_DELETE(m_pPlayer);
	SAFE_DELETE(m_pFont);
}

void CMission::Update(float fDeltaTime)
{
	CScreen::Update(fDeltaTime);

	m_pPlayer->Control();
}
void CMission::Render()
{
	CScreen::Render();
	//m_pFont->printf(5,5,HGETEXT_LEFT,"x:%.3f\ny:%.3f",m_pPlayer->m_pPlayer->GetHotPos().x,m_pPlayer->m_pPlayer->GetHotPos().y);
	m_pFont->printf(5,5,HGETEXT_LEFT,"F:%d",m_pPlayer->m_pPlayer->GetFrame());
}