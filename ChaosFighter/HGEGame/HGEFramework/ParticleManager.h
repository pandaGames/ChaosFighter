#pragma once
#include "Game.h"
#include "ParticleSystem.h"
#include "ResourceManager.h"
#include "SpriteManager.h"
#include <list>
using namespace std;
class CParticleManager
{
public:
	CParticleManager(CGame *pGame,CSpriteManager * pSprManager);
	~CParticleManager(void);

public:
	//����Ĭ������ϵͳ��1-16��
	//����pFileName�ǹ켣�ļ��ĵ�ַ��*.psi��������ΪĬ��
	CParticleSystem * CreateDefaultParticleSystem(int type, D3DXVECTOR3 vPos, const char *  pFileName = NULL, bool isPlay = true);

	//�����Զ������������Զ�������ϵͳ
	CParticleSystem * CreateCustomParticleSystem(LPTSTR resName, D3DXVECTOR3 vPos, float x, float y, float w, float h, const char * pFileName = NULL, bool isPlay = true);
	void Clear();
	void Render();
	void Update(float fDeltaTime);

private:
	list <CParticleSystem *> m_listPSys;
	CGame * m_pGame;
	CSpriteManager * m_pSprManager;
};

