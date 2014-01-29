#pragma once
#include "Sprite.h"
#include <hgeanim.h>
class CAnimSprite:
	public CSprite,public hgeAnimation
{
public:
	CAnimSprite(D3DXVECTOR3 vPos,
		HTEXTURE tex,
		int nframes,
		float FPS,
		float x,
		float y,
		float w,
		float h,
		bool isPlay);
	~CAnimSprite(void);
public:
	void RenderFunc();
	void UpdateFunc(float fDeltaTime);
	void SetHotPos(D3DXVECTOR3 vHotPos);
	void SetVisible(bool bVisible);
	void SetTexture(HTEXTURE tex);
	void SetTextureRect(float x, float y, float w, float h);
	void SetColor(DWORD col, int i = -1);
	void SetZ(float z, int i =-1);
	void SetBlendMode(int blend);
	void SetFlip(bool bX, bool bY, bool bHotSpot = false);

	HTEXTURE GetTexture();
	void GetTextureRect(float *x, float *y, float *w, float *h);
	DWORD GetColor(int i = 0);
	float GetZ(int i = 0);
	int GetBlendMode();
	D3DXVECTOR3 GetHotPos();
	void GetFlip(bool *bX,bool *bY);
	float GetWidth();
	float GetHeight();
	hgeRect *GetBoundingBox(float x,float y,hgeRect *rect);
	hgeRect *GetBoundingBoxEx(float x,float y,float rot,float hscale,float vscale,hgeRect *rect);
};

