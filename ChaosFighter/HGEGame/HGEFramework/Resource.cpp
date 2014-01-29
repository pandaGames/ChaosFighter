#include "Resource.h"


CResource::CResource(int resType,const TCHAR * resName)
{
	m_nResType = resType;
	wcscpy_s(m_szResName,resName);
}

CResource::~CResource(void)
{
}
