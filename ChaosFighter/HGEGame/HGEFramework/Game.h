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

	virtual bool	InitGame();							//��ʼ����Ϸ
	virtual void	FrameFunc(float fDeltaTime);		//��Ϸ����
	virtual void	RenderFunc();						//��Ϸ��Ⱦ
	virtual void	Release();							//�ͷ���Դ

//*****Box2D*****//
protected:
	void CreateWorld(D3DXVECTOR3 gravity = D3DXVECTOR3(0.0f,-10.0f,0.0f));
	void UpdateWorld(float fDeltaTime);
public:
	//��λת��
	static b2Vec2 * WorldToScreen(b2Vec2 * pOut, const b2Vec2 * pIn);
	static float32 MeterToPixel(float32 meter){return meter / MeterPerPixel;}
	static b2Vec2 * ScreenToWorld(b2Vec2 * pOut, const b2Vec2 * pIn);
	static float32 PixelToMeter(float32 pixel){return pixel * MeterPerPixel;}
	//��������
	b2Body * CreateBody(D3DXVECTOR3 vPos,float width,float height,bool isStatic,CSprite * pSpr = NULL,float density = 3.0, float friction = 0.3, float restitution = 0.0);
	b2Body * CreateCircle(D3DXVECTOR3 vPos,float radius,bool isStatic,CSprite * pSpr = NULL,float density = 3.0, float friction = 0.3, float restitution = 0.0);
//**************//
public:
	HGE * m_pHge;										//�豸ָ��
	CResourceManager * m_pResManager;					//��Դ������
	CScreen * m_pCurScreen;								//��ǰ��Ⱦ����Ļ
	b2World * m_pWorld;									//����ָ��
protected:
	hgeFont	* m_pFont;									//����

	bool m_bSuspend;									//��Ϸ��ͣ
	bool m_bGameOver;									//��Ϸ����

	//*****Box2D*****//
	CDebugDraw * m_pDraw;
	
	int32 m_iVelocityIterations;						//�ٶȽ׶ε���������8��
	int32 m_iPositionIterations;						//λ�ý׶ε���������3��
	float m_fTimeStep;									//ʱ�䲽
	float m_fRemainTime;								//
	float m_fTotalTime;									//
};

