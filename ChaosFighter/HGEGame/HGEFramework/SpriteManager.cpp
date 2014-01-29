#include "SpriteManager.h"
#include "ResourceManager.h"

CSpriteManager::CSpriteManager(CGame * pGame)
{
	this->m_pGame = pGame;
}


CSpriteManager::~CSpriteManager(void)
{
}

void CSpriteManager::Update(float fDeltaTime)
{
	list<CSprite *>::iterator ite = m_lstSprite.begin();
	while(ite != m_lstSprite.end())
	{
		if ((*ite)->GetVisible())
		{
			(*ite)->UpdateFunc(fDeltaTime);
		}
		ite++;
	}
}

void CSpriteManager::Render()
{
	list<CSprite *>::iterator ite = m_lstSprite.begin();
	while(ite != m_lstSprite.end())
	{
		if ((*ite)->GetVisible())
		{
			(*ite)->RenderFunc();
		}
		ite++;
	}
}

void CSpriteManager::Clear()
{
	list<CSprite *>::iterator ite = m_lstSprite.begin();
	while(ite != m_lstSprite.end())
	{
		SAFE_DELETE(*ite);
		ite++;
	}
	m_lstSprite.clear();
}

CSprite * CSpriteManager::CreateSprite(D3DXVECTOR3 vPos,const LPTSTR resName,float x,float y,float w,float h)
{
	CSprite * pSprite = new CSprite(vPos,m_pGame->m_pResManager->GetResource(RES_TEX,resName)->m_hTex,x,y,w,h);
	m_lstSprite.push_back(pSprite);
	return pSprite;
}

CAnimSprite * CSpriteManager::CreateAnimSprite(D3DXVECTOR3 vPos,const LPTSTR resName,int nFrames,float FPS,float x,float y,float w,float h,bool isPlay)
{
	CAnimSprite * pAnimSpr = new CAnimSprite(vPos,m_pGame->m_pResManager->GetResource(RES_TEX,resName)->m_hTex,nFrames,FPS,x,y,w,h,isPlay);
	m_lstSprite.push_back(pAnimSpr);
	return pAnimSpr;
}

