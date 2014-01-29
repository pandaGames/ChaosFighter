#pragma once
#include <d3dx9math.h>
#include <hgesprite.h>
class CSprite:
	public hgeSprite
{
public:
	CSprite(D3DXVECTOR3 vPos,HTEXTURE tex,float x,float y,float w,float h);
	~CSprite(void);
	virtual void RenderFunc();
	virtual void UpdateFunc(float fDeltaTime);

	void		SetPos(D3DXVECTOR3 vPos);
	void		SetHotPos(D3DXVECTOR3 vHotPos);
	void		SetVisible(bool bVisible);
	void		SetAngle(float fAngle);
	void		SetScale(float fScale);
	void		SetFlip(bool bX, bool bY, bool bHotSpot = true);

	D3DXVECTOR3 GetPos();
	D3DXVECTOR3 GetHotPos();
	bool		GetVisible();
	float		GetAngle();
	float		GetScale();
protected:
	D3DXVECTOR3 m_vPos;
	D3DXVECTOR3 m_vHotPos;
	D3DXVECTOR3 m_vOldHotPos;
	bool		m_bVisible;
	bool		m_bIsFlipX;
	bool		m_bIsFlipY;
	float		m_fScale;
	float		m_fAngle;
	hgeRect		m_rSprRect;
};

