#pragma once
#include "../HGEFramework/SpriteManager.h"

struct Attribute
{
	int			  iLevel;				//�ȼ�
	float		  fHp;					//����ֵ
	int			  iAtk;					//������
	int			  iDef;					//������
	int			  iExp;					//����ֵ
	bool		  bIsDead;				//�Ƿ�����
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
	CAnimSprite * m_pMonster;				//���ﾫ��
	b2Body		* m_pMonsterControl;		//�������
	Attribute	  m_Attribute;				//��������
};

