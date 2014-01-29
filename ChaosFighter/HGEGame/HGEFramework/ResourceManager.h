#pragma once
#include "Game.h"
#include "Resource.h"
#include <list>
using namespace std;

class CResourceManager
{
public:
	CResourceManager(CGame * pGame);
	~CResourceManager(void);

	void LoadTexture(const TCHAR * resName,const char *filename,DWORD size = 0,bool bMipmap = false);
	
	const CResource * GetResource(int resType,const LPTSTR resName);
	void Clear();
protected:
	list <CResource *> m_lstResource;

	CGame * m_pGame;
};

