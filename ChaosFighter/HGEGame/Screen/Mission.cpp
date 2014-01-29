#include "Mission.h"
#include "../MyGame.h"

CMission::CMission(CGame * pGame):CScreen(pGame)
{
	m_pBgBack = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgBack", 0, 0, 2000, 650);
	m_pBgMiddle = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgMiddle", 0, 0, 2000, 650);
	m_pBgFront = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0), L"Scene1BgFront", 0, 0, 2000, 650);
	
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

	if (m_pPlayer->GetPos().x >= 200)
	{
		D3DXVECTOR3 pos = m_pBgMiddle->GetPos();
		pos.x=pos.x-0.7;
		m_pBgMiddle->SetPos(pos);

		m_pBgBack->SetPos(D3DXVECTOR3(m_pBgBack->GetPos().x-0.5, 0, 0));

		m_pBgFront->SetPos(D3DXVECTOR3(m_pBgFront->GetPos().x-1, 0, 0));
	}

}
void CMission::Render()
{
	CScreen::Render();
	m_pFont->printf(5,5,HGETEXT_LEFT,"F:%f",m_pPlayer->GetPos().x);
}