#pragma once
#include "../HGEFramework/Screen.h"
#include "../Player/Player.h"

/*
** �����ͼ�ϰ���λ��
*/
#define Flag_1_posX 700

class CMission:
	public CScreen
{
public:
	CMission(CGame * pGame);
	~CMission(void);

public:
	void Update(float fDeltaTime);
	void Render();

private:
	CPlayer * m_pPlayer;
	hgeFont * m_pFont;

	//���㱳��
	CSprite * m_pBgFront;
	CSprite * m_pBgMiddle;
	CSprite * m_pBgBack;

	//���õ���
	CAnimSprite * m_pFlag_1;
	//ȼ�յĻ���
	CAnimSprite * m_pFlame_1;
};

