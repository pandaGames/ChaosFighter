#pragma once
#include "../HGEFramework/Screen.h"
#include "../Player/Player.h"

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

	//Èý²ã±³¾°
	CSprite * m_pBgFront;
	CSprite * m_pBgMiddle;
	CSprite * m_pBgBack;

	//ÆÆÀÃµÄÆì
	CAnimSprite * m_pFlag_1;
};

