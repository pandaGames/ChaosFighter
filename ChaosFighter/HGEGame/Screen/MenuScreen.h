#pragma once
#include "../HGEFramework/Screen.h"
#include <time.h>

/************************************************************************/
/*                              常量预定义                               */
/************************************************************************/

/*按钮贴图位置*/
#define BtnNormal_TexX 0
#define BtnHover_TexX 210
#define BtnPress_TexX 420

#define sBtn_TexY 112
#define setBtn_TexY 56
#define aBtnNormal_TexY 0

/*按钮位置*/
#define sBtn_PosX 394
#define sBtn_PosY 164
#define setBtn_PosX 364
#define setBtn_PosY 215
#define aBtn_PosX 341
#define aBtn_PosY 266

/*箭头*/
#define arrowSpeed 5

//**********************************END********************************//

class CMenuScreen:
	public CScreen
{
public:
	CMenuScreen(CGame * pGame);
	virtual ~CMenuScreen(void);

public:
	void Update(float fDeltaTime);
	void Render();
	void InitTexture();

private:
	CSprite * m_pBG;
	CSprite * m_pTitle;
	CSprite * m_pMenu;

	CSprite * m_pStartBtn;
	CSprite * m_pSettingBtn;
	CSprite * m_pAboutBtn;
	DWORD * colorArray;
	void UpdateBtnStatus();

	CSprite * m_pBigArrow;
	void UpdateArrowsStatus();

	float sumTime;
	void UpdateTitleColor( float fDeltaTime );
};

