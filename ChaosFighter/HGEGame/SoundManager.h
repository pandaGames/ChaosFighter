#pragma once
#include <hge.h>
#include <list>
#include "Game.h"

using namespace std;

class CSoundManager
{
public:
	CSoundManager(CGame * pGame);
	~CSoundManager(void);

	HEFFECT * CreateSound(const LPTSTR resName,bool isPlay = false);

	void Clear();
	
protected:
	list <HEFFECT *> m_lstSound;

	CGame * m_pGame;
};

