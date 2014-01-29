#pragma once
#include <hgeparticle.h>
#include "Sprite.h"

class CParticleSystem:
	public hgeParticleSystem
{
public:
	//根据贴图和精灵生成粒子系统
	CParticleSystem( D3DXVECTOR3 vPos, const char *pFilename, CSprite *pSprite );
	//根据自定义的粒子信息生成粒子系统
	CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystemInfo *pPsi );
	//传引用生成
	CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystem &ps );

	~CParticleSystem(void);

public:
	void SetPos(D3DXVECTOR3 vPos, bool isMoveParticles = false);//后者为true时，粒子跟着移动
	D3DXVECTOR3 GetPos();

private:
	D3DXVECTOR3 m_vPos;
};

