#pragma once
#include "Game.h"
#include "Sprite.h"
#include "AnimSprite.h"
#include <hgeanim.h>
#include <list>
using namespace std;
class CSpriteManager
{
public:
	CSpriteManager(CGame * pGame);
	~CSpriteManager(void);

	void Update(float fDeltaTime);
	void Render();

	CSprite * CreateSprite(D3DXVECTOR3 vPos,const LPTSTR resName,float x,float y,float w,float h);
	CAnimSprite * CreateAnimSprite(D3DXVECTOR3 vPos,const LPTSTR resName,int nFrames,float FPS,float x,float y,float w,float h,bool isPlay = true);

	void Clear();
protected:
	list <CSprite *> m_lstSprite;

	CGame * m_pGame;
};

