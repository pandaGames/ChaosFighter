#include "SoundManager.h"


CSoundManager::CSoundManager(CGame * pGame)
{
	this->m_pGame = pGame;
}


CSoundManager::~CSoundManager(void)
{
}

HEFFECT CSoundManager::CreateSound(const LPTSTR resName,bool isPlay /* = false */)
{
	HEFFECT * pEffect = m_pGame->m_pResManager->GetResource(RES_SND, resName);
	m_lstSound.push_back(pEffect);
	return pEffect;
}

void CSoundManager::Clear()
{
	list<HEFFECT *>::iterator ite = m_lstSound.begin();
	while(ite != m_lstSound.end())
	{
		SAFE_DELETE(*ite);
		ite++;
	}
	m_lstSound.clear();
}