#pragma once
#include "../Monster.h"
class CMelissa:
	public CMonster
{
public:
	CMelissa(CGame * pGame,CSpriteManager * pSprManager);
	~CMelissa(void);

public:
	void Update(float fDeltaTime);
};

