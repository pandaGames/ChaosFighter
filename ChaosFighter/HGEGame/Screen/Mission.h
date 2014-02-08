#pragma once
#include "../HGEFramework/Screen.h"
#include "../Player/Player.h"

/*
** 定义地图障碍的位置
*/
#define Flag_1_posX 700

class CMission:
	public CScreen
{
public:
	CMission(CGame * pGame);
	~CMission(void);

public:
	void Update(float fDeltaTime);
	void Render();

private:
	CPlayer * m_pPlayer;
	hgeFont * m_pFont;

	//三层背景
	CSprite * m_pBgFront;
	CSprite * m_pBgMiddle;
	CSprite * m_pBgBack;

	//破烂的旗
	CAnimSprite * m_pFlag_1;
	//燃烧的火焰
	CAnimSprite * m_pFlame_1;
};

