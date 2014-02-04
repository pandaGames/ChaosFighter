#include "Mission.h"
#include "../MyGame.h"

CMission::CMission(CGame * pGame):CScreen(pGame)
{
	m_pBgBack = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgBack", 0, 0, 1475, 480);
	m_pBgMiddle = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgMiddle", 0, 0, 1475, 480);
	m_pBgFront = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgFront", 0, 0, 1475, 480);
	
	m_pFlag_1 = m_pSprManager->CreateAnimSprite(D3DXVECTOR3(700,100,0), L"Flag_1", 4, 6, 0, 0, 212, 500);
	m_pFlag_1->SetScale(0.3);

	m_pPlayer = new CPlayer(m_pGame,m_pSprManager);
	m_pFont = new hgeFont("Resource/Font/font1.fnt");
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

	if (m_pPlayer->GetPos().x >= 770)
	{
		m_pBgMiddle->SetPos(D3DXVECTOR3(m_pBgMiddle->GetPos().x-0.7, 0, 0));
		m_pBgBack->SetPos(D3DXVECTOR3(m_pBgBack->GetPos().x-0.5, 0, 0));
		m_pBgFront->SetPos(D3DXVECTOR3(m_pBgFront->GetPos().x-1, 0, 0));
		m_pFlag_1->SetPos(D3DXVECTOR3(m_pBgFront->GetPos().x+700,100,0));
	}

}
void CMission::Render()
{
	CScreen::Render();
	m_pFont->printf(5,5,HGETEXT_LEFT,"F:%f",m_pPlayer->GetPos().x);
}