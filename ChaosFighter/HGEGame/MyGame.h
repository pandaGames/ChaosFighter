#pragma once
#include "HGEFramework/Game.h"
#include "Screen/MenuScreen.h"
#include "Screen/Mission.h"

//#pragma comment(lib, "D:\developTool\GameEngine\Box2D_v2.2.1_VS2008\Box2D\Debug\box2d.lib")

class CMyGame:
	public CGame
{
public:
	CMyGame(void);
	~CMyGame(void);

public:
	bool	InitGame();
	void	FrameFunc(float fDeltaTime);
	void	RenderFunc();
	void	Release();

public:

	CScreen * m_pMenu;
	CScreen * m_pMission;

};

