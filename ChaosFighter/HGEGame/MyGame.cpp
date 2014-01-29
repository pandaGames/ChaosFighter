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
	//��Դ
	InitTextures();
	//��ʼ�����ֳ���
	m_pMenu = new CMenuScreen(this);
	m_pMission = new CMission(this);
	//ָ����һ����ʾ�ĸ�����
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
	//������Դ
	m_pResManager->LoadTexture(L"BG","Resource/Texture/bg.png");
	m_pResManager->LoadTexture(L"Action","Resource/Texture/Action.png");
	m_pResManager->LoadTexture(L"Scene1BgFront", "Resource/Texture/Maps/scene1/1.png");
	m_pResManager->LoadTexture(L"Scene1BgMiddle", "Resource/Texture/Maps/scene1/2.png");
	m_pResManager->LoadTexture(L"Scene1BgBack", "Resource/Texture/Maps/scene1/3.png");
}