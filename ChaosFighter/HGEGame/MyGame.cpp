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
	//资源
	InitTextures();
	//初始化各种场景
	m_pMenu = new CMenuScreen(this);
	m_pMission = new CMission(this);
	//指定第一屏显示哪个场景
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

void CMyGame::InitTextures()
{
	//加载资源
	m_pResManager->LoadTexture(L"BG","Resource/Texture/bg.png");
	m_pResManager->LoadTexture(L"Role1","Resource/Texture/Role/role_1.png");
	//chapter1 maps
	m_pResManager->LoadTexture(L"Scene1BgFront", "Resource/Texture/Maps/chapter1/chapter1-1-1.png");
	m_pResManager->LoadTexture(L"Scene1BgMiddle", "Resource/Texture/Maps/chapter1/chapter1-1-2.png");
	m_pResManager->LoadTexture(L"Scene1BgBack", "Resource/Texture/Maps/chapter1/chapter1-1-3.png");
	//chapter1 components
	m_pResManager->LoadTexture(L"Flag_1", "Resource/Texture/Maps/chapter1/components/flag_1.png");
	m_pResManager->LoadTexture(L"Flame_1", "Resource/Texture/Maps/chapter1/components/flame_1.png");
}
