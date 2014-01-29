#include "AnimSprite.h"


CAnimSprite::CAnimSprite(D3DXVECTOR3 vPos,
	HTEXTURE tex,
	int nframes,
	float FPS,
	float x,
	float y,
	float w,
	float h,
	bool isPlay):hgeAnimation(tex,nframes,FPS,x,y,w,h),CSprite(vPos,tex,x,y,w,h)
{
	if (isPlay)
	{
		hgeAnimation::Play();
	}
}

CAnimSprite::~CAnimSprite(void)
{
}

void CAnimSprite::RenderFunc()
{
	hgeAnimation::RenderEx(m_vPos.x,m_vPos.y,m_fAngle,m_fScale,m_fScale);
}

void  CAnimSprite::UpdateFunc(float fDeltaTime)
{
	hgeAnimation::Update(fDeltaTime);
}

void CAnimSprite::SetHotPos(D3DXVECTOR3 vHotPos)
{
	m_vHotPos = vHotPos;
	m_vOldHotPos = vHotPos;
	hgeAnimation::SetHotSpot(m_vHotPos.x,m_vHotPos.y);
}
void CAnimSprite::SetVisible(bool bVisible)
{
	m_bVisible = bVisible;
	if (m_bVisible)
	{
		hgeAnimation::SetColor(0xffffffff);
	} 
	else
	{
		hgeAnimation::SetColor(0x00ffffff);
	}
}

void CAnimSprite::SetTexture(HTEXTURE tex)
{
	hgeAnimation::SetTexture(tex);
}
void CAnimSprite::SetTextureRect(float x, float y, float w, float h)
{
	hgeAnimation::SetTextureRect(x,y,w,h);
}
void CAnimSprite::SetColor(DWORD col, int i)
{
	hgeAnimation::SetColor(col,i);
}
void CAnimSprite::SetZ(float z, int i)
{
	hgeAnimation::SetZ(z,i);
}
void CAnimSprite::SetBlendMode(int blend)
{
	hgeAnimation::SetBlendMode(blend);
}
void CAnimSprite::SetFlip(bool bX, bool bY, bool bHotSpot)
{
	hgeAnimation::SetFlip(bX,bY,bHotSpot);
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
		hgeAnimation::SetHotSpot(vHotPos.x,vHotPos.y);
	}
	else
	{
		vHotPos = m_vOldHotPos;
		hgeAnimation::SetHotSpot(vHotPos.x,vHotPos.y);
	}
}

HTEXTURE CAnimSprite::GetTexture()
{
	return hgeAnimation::GetTexture();
}
void CAnimSprite::GetTextureRect(float *x, float *y, float *w, float *h)
{
	hgeAnimation::GetTextureRect(x,y,w,h);
}
DWORD CAnimSprite::GetColor(int i)
{
	return hgeAnimation::GetColor(i);
}
float CAnimSprite::GetZ(int i)
{
	return hgeAnimation::GetZ(i);
}
int CAnimSprite::GetBlendMode()
{
	return hgeAnimation::GetBlendMode();
}
D3DXVECTOR3 CAnimSprite::GetHotPos()
{
	hgeAnimation::GetHotSpot(&m_vHotPos.x,&m_vHotPos.y);
	return m_vHotPos;
}
void CAnimSprite::GetFlip(bool *bX,bool *bY)
{
	hgeAnimation::GetFlip(bX,bY);
}
float CAnimSprite::GetWidth()
{
	return hgeAnimation::GetWidth();
}
float CAnimSprite::GetHeight()
{
	return hgeAnimation::GetHeight();
}
hgeRect * CAnimSprite::GetBoundingBox(float x,float y,hgeRect *rect)
{
	return hgeAnimation::GetBoundingBox(x,y,rect);
}
hgeRect * CAnimSprite::GetBoundingBoxEx(float x,float y,float rot,float hscale,float vscale,hgeRect *rect)
{
	return hgeAnimation::GetBoundingBoxEx(x,y,rot,hscale,vscale,rect);
}