#include "Sprite.h"


CSprite::CSprite(D3DXVECTOR3 vPos,HTEXTURE tex,float x,float y,float w,float h):hgeSprite(tex,x,y,w,h)
{
	m_vPos = vPos;
	m_fAngle = 0;
	m_bVisible = true;
	m_bIsFlipX = false;
	m_bIsFlipY = false;
	m_fScale = 1.0;
	hgeSprite::GetHotSpot(&m_vHotPos.x,&m_vHotPos.y);
	hgeSprite::GetHotSpot(&m_vOldHotPos.x,&m_vOldHotPos.y);
	hgeSprite::GetBoundingBoxEx(m_vPos.x,m_vPos.y,m_fAngle,m_fScale,m_fScale,&m_rSprRect);
}


CSprite::~CSprite(void)
{
}

void CSprite::RenderFunc()
{
	hgeSprite::RenderEx(m_vPos.x,m_vPos.y,m_fAngle,m_fScale,m_fScale);
}

void CSprite::UpdateFunc(float fDeltaTime)
{

}

void CSprite::SetPos(D3DXVECTOR3 vPos)
{
	m_vPos = vPos;
}
void CSprite::SetHotPos(D3DXVECTOR3 vHotPos)
{
	m_vHotPos = vHotPos;
	m_vOldHotPos = vHotPos;
	hgeSprite::SetHotSpot(m_vHotPos.x,m_vHotPos.y);
}
void CSprite::SetVisible(bool bVisible)
{
	m_bVisible = bVisible;
	if (m_bVisible)
	{
		hgeSprite::SetColor(0xffffffff);
	} 
	else
	{
		hgeSprite::SetColor(0x00ffffff);
	}
}
void CSprite::SetAngle(float fAngle)
{
	m_fAngle = fAngle;
}
void CSprite::SetScale(float fScale)
{
	m_fScale = fScale;
}
void CSprite::SetFlip(bool bX, bool bY, bool bHotSpot)
{
	hgeSprite::SetFlip(bX,bY,bHotSpot);
	D3DXVECTOR3 vHotPos;
	if (bHotSpot)
	{
		vHotPos =m_vOldHotPos;
		if (bX)
		{
			vHotPos.x = (m_vOldHotPos.x+(GetWidth()-m_vOldHotPos.x*2));
		}
		if (bY)
		{
			vHotPos.y = (m_vOldHotPos.y+(GetHeight()-m_vOldHotPos.y*2));
		}
		hgeSprite::SetHotSpot(vHotPos.x,vHotPos.y);
	}
	else
	{
		vHotPos = m_vOldHotPos;
		hgeSprite::SetHotSpot(vHotPos.x,vHotPos.y);
	}
}
D3DXVECTOR3 CSprite::GetPos()
{
	return m_vPos;
}
D3DXVECTOR3 CSprite::GetHotPos()
{
	hgeSprite::GetHotSpot(&m_vHotPos.x,&m_vHotPos.y);
	return m_vHotPos;
}
bool CSprite::GetVisible()
{
	return	m_bVisible;
}
float CSprite::GetAngle()
{
	return m_fAngle;
}
float CSprite::GetScale()
{
	return m_fScale;
}