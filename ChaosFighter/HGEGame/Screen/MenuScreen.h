#pragma once
#include "../HGEFramework/Screen.h"
class CMenuScreen:
	public CScreen
{
public:
	CMenuScreen(CGame * pGame);
	virtual ~CMenuScreen(void);

public:
	void Update(float fDeltaTime);
	void Render();

private:
	CSprite * m_pSprite;
	
};

