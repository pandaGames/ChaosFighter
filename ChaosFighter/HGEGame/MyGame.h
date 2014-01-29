#pragma once
#include "HGEFramework/Game.h"
#include "Screen/MenuScreen.h"
#include "Screen/Mission.h"

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
	//³õÊ¼»¯ÌùÍ¼
	void InitTextures();
public:

	CScreen * m_pMenu;
	CScreen * m_pMission;

};

