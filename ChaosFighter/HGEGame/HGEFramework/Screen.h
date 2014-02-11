#pragma once
#include "Game.h"
#include "SpriteManager.h"
#include "ParticleManager.h"
#include "SoundManager.h"

class CScreen
{
public:
	CScreen(CGame * pGame);
	virtual ~CScreen(void);
public:

	virtual void Update(float fDeltaTime);
	virtual void Render();

protected:
	CGame * m_pGame;
	CParticleManager * m_pParManager;
	CSpriteManager * m_pSprManager;
	CSoundManager * m_pSndManager;
};

