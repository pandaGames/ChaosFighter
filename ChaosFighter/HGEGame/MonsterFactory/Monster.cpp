#include "Monster.h"


CMonster::CMonster(CGame * pGame)
{
	m_pGame = pGame;
}

CMonster::~CMonster(void)
{
}

void CMonster::SetHp(float hp)
{
	m_Attribute.fHp = hp;
}

Attribute CMonster::GetAttribute()
{
	return m_Attribute;
}