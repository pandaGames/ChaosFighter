#include "ParticleManager.h"
#include "Game.h"

CParticleManager::CParticleManager(CGame *pGame,CSpriteManager * pSprManager)
{
	this->m_pGame = pGame;
	this->m_pSprManager = pSprManager;
}


CParticleManager::~CParticleManager(void)
{
}

void CParticleManager::Clear()
{
	list<CParticleSystem *>::iterator ite1 = m_listPSys.begin();
	while(ite1 != m_listPSys.end())
	{
		SAFE_DELETE(*ite1);
		ite1++;
	}
	m_listPSys.clear();
}

void CParticleManager::Render()
{
	list<CParticleSystem *>::iterator ite = m_listPSys.begin();
	while(ite != m_listPSys.end())
	{
		(*ite)->Render();
		ite++;
	}
}

void CParticleManager::Update(float fDeltaTime)
{
	list<CParticleSystem *>::iterator ite = m_listPSys.begin();
	while(ite != m_listPSys.end())
	{
		(*ite)->Update(fDeltaTime);
		ite++;
	}
}

CParticleSystem * CParticleManager::CreateDefaultParticleSystem(int type, D3DXVECTOR3 vPos, const char * pFileName, bool isPlay)
{
	CSprite *pSpr;
	CParticleSystem *pPar;

	pSpr = m_pSprManager->CreateSprite(D3DXVECTOR3(0, 0, 0), L"PARTICLE", (type-1)*32.0f, (type-1)*32.0f, 32.0, 32.0);
	pSpr->SetVisible(false);
	pSpr->SetBlendMode(BLEND_COLORMUL | BLEND_ALPHAADD | BLEND_NOZWRITE);
	pSpr->SetHotSpot(16,16);
	if(pFileName == NULL)
		pPar = new CParticleSystem(vPos, "Resource/Particle/trail.psi", pSpr);
	else
		pPar = new CParticleSystem(vPos, pFileName, pSpr);

	if(isPlay){pPar->Fire();}

	m_listPSys.push_back(pPar);
	
	return pPar;
}

CParticleSystem * CParticleManager::CreateCustomParticleSystem(LPTSTR resName, D3DXVECTOR3 vPos, float x, float y, float w, float h, const char * pFileName, bool isPlay)
{
	CSprite *pSpr;
	CParticleSystem *pPar;

	pSpr = m_pSprManager->CreateSprite(D3DXVECTOR3(0, 0, 0), resName, x, y, w, h);
	pSpr->SetVisible(false);
	pSpr->SetBlendMode(BLEND_COLORMUL | BLEND_ALPHAADD | BLEND_NOZWRITE);
	pSpr->SetHotSpot(16,16);
	if(pFileName == NULL)
		pPar = new CParticleSystem(vPos, "Resource/Particle/trail.psi", pSpr);
	else
		pPar = new CParticleSystem(vPos, pFileName, pSpr);

	if(isPlay){pPar->Fire();}

	m_listPSys.push_back(pPar);

	return pPar;
}