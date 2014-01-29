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
};

