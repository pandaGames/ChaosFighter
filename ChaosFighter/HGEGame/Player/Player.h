#pragma once
#include "../HGEFramework/SpriteManager.h"

#define MOVESPEED	1.5

enum ActionType
{
	stand,
	run,
	jump,
	down,
	zswordA,
	zswordB,
	zswordC
};

class CPlayer
{
public:
	CPlayer(CGame * pGame,CSpriteManager * pSprManager);
	~CPlayer(void);

public:
	void Control();
	void Stand();
	void Run();
	void Jump();
	void Down();
	void ZSwordA();
	void ZSwordB();
	void ZSwordC();

	void SetPos(D3DXVECTOR3 vPos);
	D3DXVECTOR3 GetPos();
	CAnimSprite * m_pPlayer;
private:
	CGame * m_pGame;
	b2Body * m_pPlayerControl;
	
	ActionType m_AType;
	bool m_bJump;
	bool m_bAttack;
};

