#include "ResourceManager.h"


CResourceManager::CResourceManager(CGame * pGame)
{
	this->m_pGame = pGame;
}

CResourceManager::~CResourceManager(void)
{
}

void CResourceManager::LoadTexture(const TCHAR * resName,const char *filename,DWORD size /* = 0 */,bool bMipmap /* = false */)
{
	CResource * pTexRes = new CResource(RES_TEX,resName);
	pTexRes->m_hTex = m_pGame->m_pHge->Texture_Load(filename);
	m_lstResource.push_back(pTexRes);
}

void CResourceManager::LoadSound(const TCHAR * resName, const char *filename)
{
	CResource * pSndRes = new CResource(RES_SND, resName);
	pSndRes->m_hSnd = m_pGame->m_pHge->Effect_Load(filename);
	m_lstResource.push_back(pSndRes);
}

const CResource * CResourceManager::GetResource(int resType,const LPTSTR resName)
{
	list<CResource *>::iterator ite = m_lstResource.begin();
	while(ite != m_lstResource.end())
	{
		if (resType == (*ite)->m_nResType)
		{
			if (wcscmp((*ite)->m_szResName,resName) == 0)
			{
				return *ite;
			}
		}
		ite++;
	}

	return NULL;
}

void CResourceManager::Clear()
{
	list<CResource *>::iterator ite = m_lstResource.begin();
	while(ite != m_lstResource.end())
	{
		if ((*ite)->m_nResType == RES_TEX)
		{
			m_pGame->m_pHge->Texture_Free((*ite)->m_hTex);
		}
		else if ((*ite)->m_nResType == RES_SND)
		{
			m_pGame->m_pHge->Effect_Free((*ite)->m_hSud);
		}
		else if ((*ite)->m_nResType == RES_MUS)
		{
			m_pGame->m_pHge->Music_Free((*ite)->m_hMus);
		}
		ite++;
	}
	m_lstResource.clear();
}