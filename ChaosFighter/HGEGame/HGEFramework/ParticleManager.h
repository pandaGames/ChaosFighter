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
	//创建默认粒子系统（1-16）
	//其中pFileName是轨迹文件的地址（*.psi），空则为默认
	CParticleSystem * CreateDefaultParticleSystem(int type, D3DXVECTOR3 vPos, const char *  pFileName = NULL, bool isPlay = true);

	//传入自定义纹理，创建自定义粒子系统
	CParticleSystem * CreateCustomParticleSystem(LPTSTR resName, D3DXVECTOR3 vPos, float x, float y, float w, float h, const char * pFileName = NULL, bool isPlay = true);
	void Clear();
	void Render();
	void Update(float fDeltaTime);

private:
	list <CParticleSystem *> m_listPSys;
	CGame * m_pGame;
	CSpriteManager * m_pSprManager;
};

