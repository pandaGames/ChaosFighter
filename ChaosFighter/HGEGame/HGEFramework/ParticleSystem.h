#pragma once
#include <hgeparticle.h>
#include "Sprite.h"

class CParticleSystem:
	public hgeParticleSystem
{
public:
	//������ͼ�;�����������ϵͳ
	CParticleSystem( D3DXVECTOR3 vPos, const char *pFilename, CSprite *pSprite );
	//�����Զ����������Ϣ��������ϵͳ
	CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystemInfo *pPsi );
	//����������
	CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystem &ps );

	~CParticleSystem(void);

public:
	void SetPos(D3DXVECTOR3 vPos, bool isMoveParticles = false);//����Ϊtrueʱ�����Ӹ����ƶ�
	D3DXVECTOR3 GetPos();

private:
	D3DXVECTOR3 m_vPos;
};

