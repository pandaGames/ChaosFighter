#include "Screen.h"

CScreen::CScreen(CGame * pGame)
{
	m_pSprManager = new CSpriteManager(pGame);
	m_pParManager = new CParticleManager(pGame,m_pSprManager);
	m_pSndManager = new CSoundManager(pGame);
	m_pGame = pGame;
}

CScreen::~CScreen(void)
{
	m_pSprManager->Clear();
	m_pSndManager->Clear();
	SAFE_DELETE(m_pSprManager);
	SAFE_DELETE(m_pSndManager);
}

void CScreen::Update(float fDeltaTime)
{
	m_pSprManager->Update(fDeltaTime);
	m_pParManager->Update(fDeltaTime);
}
void CScreen::Render()
{
	m_pSprManager->Render();
	m_pParManager->Render();
}