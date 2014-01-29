#include "Melissa.h"


CMelissa::CMelissa(CGame * pGame,CSpriteManager * pSprManager):CMonster(pGame)
{
	m_Attribute.bIsDead = false;
	m_Attribute.iLevel	= 1;
	m_Attribute.fHp		= 402;
	m_Attribute.iAtk	= 45;
	m_Attribute.iDef	= 3;
	m_Attribute.iExp	= 30;
}

CMelissa::~CMelissa(void)
{
}

void CMelissa::Update(float fDeltaTime)
{

}