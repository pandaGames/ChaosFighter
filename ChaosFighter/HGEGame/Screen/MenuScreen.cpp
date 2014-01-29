#include "MenuScreen.h"
#include "../MyGame.h"

CMenuScreen::CMenuScreen(CGame * pGame):CScreen(pGame)
{
	m_pSprite = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0),L"BG",0,0,800,480);

}

CMenuScreen::~CMenuScreen(void)
{
}

void CMenuScreen::Update(float fDeltaTime)
{
	CScreen::Update(fDeltaTime);

	if (m_pGame->m_pHge->Input_GetKeyState(HGEK_SPACE))
	{
		((CMyGame*)m_pGame)->m_pCurScreen = ((CMyGame*)m_pGame)->m_pMission;
	}
}
void CMenuScreen::Render()
{
	CScreen::Render();
}