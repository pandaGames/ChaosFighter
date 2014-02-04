#include "Player.h"

CPlayer::CPlayer(CGame * pGame,CSpriteManager * pSprManager)
{
	m_pGame = pGame;
	m_pPlayer = pSprManager->CreateAnimSprite(D3DXVECTOR3(0,0,0),L"Role1",6,6,20,532,54,84);
	m_pPlayer->SetHotPos(D3DXVECTOR3(30,60,0));
	m_pPlayerControl = m_pGame->CreateBody(D3DXVECTOR3(100,100,0),40,40,false,m_pPlayer,3.0,1.0);
	m_pPlayerControl->SetFixedRotation(true);
	
	m_bJump = false;
	m_bAttack = false;
	m_AType = stand;
}

CPlayer::~CPlayer(void)
{
}

void CPlayer::Stand()
{
	m_pPlayer->SetFrames(6);
	m_pPlayer->SetSpeed(6);
	m_pPlayer->SetTextureRect(20,532,57,84);
	m_AType = stand;
}
void CPlayer::Run()
{
	m_pPlayer->SetTextureRect(18,633,50,84);
	m_pPlayer->SetFrames(6);
	m_pPlayer->SetSpeed(6);
	m_AType = run;
}
void CPlayer::Jump()
{
	if (m_pPlayer->GetFrame() > 3){m_pPlayer->SetFrame(0);}
	m_pPlayer->SetTextureRect(0,180,90,90);
	m_pPlayer->SetFrames(4);
	m_pPlayer->SetSpeed(8);
	m_AType = jump;
}
void CPlayer::Down()
{
	if (m_pPlayer->GetFrame() > 3){m_pPlayer->SetFrame(0);}
	m_pPlayer->SetTextureRect(360,180,90,90);
	m_pPlayer->SetFrames(4);
	m_pPlayer->SetSpeed(8);
	m_AType = down;
}
void CPlayer::ZSwordA()
{
	m_pPlayer->SetTextureRect(0,270,90,90);
	m_pPlayer->SetFrame(0);
	m_pPlayer->SetFrames(8);
	m_pPlayer->SetSpeed(12);
	m_AType = zswordA;
}
void CPlayer::ZSwordB()
{
	m_pPlayer->SetTextureRect(0,360,90,90);
	m_pPlayer->SetFrame(0);
	m_pPlayer->SetFrames(9);
	m_pPlayer->SetSpeed(12);
	m_AType = zswordB;
}
void CPlayer::ZSwordC()
{
	m_pPlayer->SetTextureRect(0,450,90,90);
	m_pPlayer->SetFrame(0);
	m_pPlayer->SetFrames(11);
	m_pPlayer->SetSpeed(16);
	m_AType = zswordC;
}

void CPlayer::SetPos(D3DXVECTOR3 vPos)
{
	m_pPlayer->SetPos(vPos);
}

void CPlayer::Control()
{
	//¹¥»÷
	if (m_pGame->m_pHge->Input_GetKeyState(HGEK_X) && !m_bAttack && !m_bJump){m_bAttack = true;ZSwordA();}
	else if (m_pGame->m_pHge->Input_GetKeyState(HGEK_X) && m_bAttack && m_pPlayer->GetFrame() >= 6 && m_AType == zswordA){ZSwordB();}
	else if (m_pGame->m_pHge->Input_GetKeyState(HGEK_X) && m_bAttack && m_pPlayer->GetFrame() >= 7 && m_AType == zswordB){ZSwordC();}
	else if (m_pPlayer->GetFrame() >= 7 && m_bAttack && m_AType == zswordA
			|| m_pPlayer->GetFrame() >= 8 && m_bAttack && m_AType == zswordB
			|| m_pPlayer->GetFrame() >= 10 && m_bAttack && m_AType == zswordC)
	{m_bAttack = false;m_pPlayer->SetFrame(0);}

	if (!m_bAttack)
	{
		//ÌøÔ¾
		if (m_pPlayerControl->GetLinearVelocity().y < -0.1 && !m_bJump){m_bJump = true;}
		else if (m_pGame->m_pHge->Input_GetKeyState(HGEK_C) && !m_bJump)
		{
			m_bJump = true;
			m_pPlayerControl->ApplyForce(b2Vec2(0,40),m_pPlayerControl->GetWorldCenter());
		}
		if (m_pPlayerControl->GetLinearVelocity().y == 0 && m_AType == down){m_bJump = false;}
		else if (m_pPlayerControl->GetLinearVelocity().y > 0 && m_bJump){Jump();}
		else if (m_pPlayerControl->GetLinearVelocity().y <= 0 && m_bJump){Down();}

		//×óÓÒÒÆ¶¯
		if (m_pGame->m_pHge->Input_GetKeyState(HGEK_RIGHT))
		{
			m_pPlayer->SetFlip(false,false,true);
			if (m_pPlayerControl->GetLinearVelocity().x < MOVESPEED)
			{
				m_pPlayerControl->ApplyForce(b2Vec2(2.0,0),m_pPlayerControl->GetWorldCenter());
			}
			if (!m_bJump){Run();}
		}
		else if(m_pGame->m_pHge->Input_GetKeyState(HGEK_LEFT))
		{
			m_pPlayer->SetFlip(true,false,true);
			if (m_pPlayerControl->GetLinearVelocity().x > -MOVESPEED)
			{
				m_pPlayerControl->ApplyForce(b2Vec2(-2.0,0),m_pPlayerControl->GetWorldCenter());
			}
			if (!m_bJump){Run();}
		}
		//Õ¾Á¢
		else if(!m_bJump){Stand();}
	}
}

D3DXVECTOR3 CPlayer::GetPos()
{
	return m_pPlayer->GetPos();
}