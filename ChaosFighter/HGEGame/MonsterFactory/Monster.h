#pragma once
#include "../HGEFramework/SpriteManager.h"

struct Attribute
{
	int			  iLevel;				//等级
	float		  fHp;					//生命值
	int			  iAtk;					//攻击力
	int			  iDef;					//防御力
	int			  iExp;					//经验值
	bool		  bIsDead;				//是否死亡
};

class CMonster
{
public:
	CMonster(CGame * pGame);
	~CMonster(void);

public:
	virtual void Update(float fDeltaTime) = 0;

	void SetHp(float hp);
	Attribute GetAttribute();
protected:
	CGame		* m_pGame;
	CAnimSprite * m_pMonster;				//怪物精灵
	b2Body		* m_pMonsterControl;		//怪物刚体
	Attribute	  m_Attribute;				//怪物属性
};

