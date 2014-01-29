#include "MyGame.h"
#include "HGEFramework/ResourceManager.h"
#include "HGEFramework/SpriteManager.h"

CMyGame::CMyGame(void):CGame()
{
}


CMyGame::~CMyGame(void)
{
}

bool CMyGame::InitGame()
{
	if (!CGame::InitGame())
	{
		return false;
	}
	
	m_pResManager->LoadTexture(L"BG","Resource/Texture/bg.png");
	m_pResManager->LoadTexture(L"Action","Resource/Texture/Action.png");
	//m_pResManager->LoadTexture(L"ELECTRICITY","Resource/Effect/22.png");
	m_pResManager->LoadTexture(L"PARTICLE","Resource/Particle/particles.png");
	
	m_pMenu = new CMenuScreen(this);
	m_pMission = new CMission(this);

	m_pCurScreen = m_pMission;

	return true;
}

void CMyGame::FrameFunc(float fDeltaTime)
{
	CGame::FrameFunc(fDeltaTime);
}

void CMyGame::RenderFunc()
{
	CGame::RenderFunc();
}

void CMyGame::Release()
{
	CGame::Release();
	SAFE_DELETE(m_pMenu);
	SAFE_DELETE(m_pMission);
}