#pragma once
#include "HGEFramework/Game.h"
#include "Screen/MenuScreen.h"
#include "Screen/Mission.h"

//@author shallow

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
	//��ʼ����ͼ
	void InitTextures();
public:

	CScreen * m_pMenu;
	CScreen * m_pMission;

};

