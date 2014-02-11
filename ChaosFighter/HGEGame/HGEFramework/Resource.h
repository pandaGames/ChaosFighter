#pragma once
#include <hge.h>
#include <hgeparticle.h>
enum 
{
	RES_TEX,
	RES_SND,
	RES_MUS,
};

class CResource
{
public:
	CResource(int resType,const TCHAR * resName);
	~CResource(void);
public:
	HTEXTURE	m_hTex;
	HEFFECT		m_hSnd;
	HMUSIC		m_hMus;
	int			m_nResType;
	TCHAR		m_szResName[MAX_PATH];
};

