#pragma once
#include <hge.h>
#include <hgefont.h>
#include <d3dx9math.h>
#include <Box2D.h>
#include "Sprite.h"
#include "AnimSprite.h"
#include "DebugDraw.h"

#define SAFE_DELETE(p)       { if (p) { delete (p);}     (p)=NULL; }
#define SCREEN_WIDTH		800
#define SCREEN_HEIGHT		480

const float32 MeterPerPixel = 0.00615f;
const float m_fScreenWidth = SCREEN_WIDTH;
const float m_fScreenHeight = SCREEN_HEIGHT;

class CScreen;
class CResourceManager;
class CGame
{
public:
	CGame(void);
	~CGame(void);

	virtual bool	InitGame();							//初始化游戏
	virtual void	FrameFunc(float fDeltaTime);		//游戏更新
	virtual void	RenderFunc();						//游戏渲染
	virtual void	Release();							//释放资源

//*****Box2D*****//
protected:
	void CreateWorld(D3DXVECTOR3 gravity = D3DXVECTOR3(0.0f,-10.0f,0.0f));
	void UpdateWorld(float fDeltaTime);
public:
	//单位转换
	static b2Vec2 * WorldToScreen(b2Vec2 * pOut, const b2Vec2 * pIn);
	static float32 MeterToPixel(float32 meter){return meter / MeterPerPixel;}
	static b2Vec2 * ScreenToWorld(b2Vec2 * pOut, const b2Vec2 * pIn);
	static float32 PixelToMeter(float32 pixel){return pixel * MeterPerPixel;}
	//创建刚体
	b2Body * CreateBody(D3DXVECTOR3 vPos,float width,float height,bool isStatic,CSprite * pSpr = NULL,float density = 3.0, float friction = 0.3, float restitution = 0.0);
	b2Body * CreateCircle(D3DXVECTOR3 vPos,float radius,bool isStatic,CSprite * pSpr = NULL,float density = 3.0, float friction = 0.3, float restitution = 0.0);
//**************//
public:
	HGE * m_pHge;										//设备指针
	CResourceManager * m_pResManager;					//资源管理器
	CScreen * m_pCurScreen;								//当前渲染的屏幕
	b2World * m_pWorld;									//世界指针
protected:
	hgeFont	* m_pFont;									//字体

	bool m_bSuspend;									//游戏暂停
	bool m_bGameOver;									//游戏结束

	//*****Box2D*****//
	CDebugDraw * m_pDraw;
	
	int32 m_iVelocityIterations;						//速度阶段迭代（建议8）
	int32 m_iPositionIterations;						//位置阶段迭代（建议3）
	float m_fTimeStep;									//时间步
	float m_fRemainTime;								//
	float m_fTotalTime;									//
};

