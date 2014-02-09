#include "MenuScreen.h"
#include "../MyGame.h"

CMenuScreen::CMenuScreen(CGame * pGame):CScreen(pGame)
{
	srand(time(NULL));
	InitTexture();
	m_pBG = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0),L"BG",0,0,800,480);
	m_pTitle = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0),L"title",0,0,800,480);

	colorArray = new DWORD[7];
	colorArray[0] = 0xFFd22fa6;
	colorArray[1] = 0xFF583ff0;
	colorArray[2] = 0xFFfffc0b;
	colorArray[3] = 0xFFff7e0b;
	colorArray[4] = 0xFF0bf1ff;
	colorArray[5] = 0xFFff0b6d;
	colorArray[6] = 0xFF6751a0;

	sumTime = 0;

	//箭头s
	m_pBigArrow = m_pSprManager->CreateSprite(D3DXVECTOR3(596,183,0), L"bigArrow", 0, 0, 40, 23);

	m_pMenu = m_pSprManager->CreateSprite(D3DXVECTOR3(0,0,0),L"menu",0,0,800,480);
	m_pStartBtn = m_pSprManager->CreateSprite(D3DXVECTOR3(sBtn_PosX,sBtn_PosY,0),L"menuBtn",BtnNormal_TexX,sBtn_TexY,200,46);
	m_pSettingBtn = m_pSprManager->CreateSprite(D3DXVECTOR3(setBtn_PosX, setBtn_PosY,0),L"menuBtn",BtnNormal_TexX,setBtn_TexY,200,46);
	m_pAboutBtn = m_pSprManager->CreateSprite(D3DXVECTOR3(aBtn_PosX,aBtn_PosY,0),L"menuBtn",BtnNormal_TexX,aBtnNormal_TexY,200,46);
	
	//设置标题一开始的颜色
	m_pTitle->SetColor(0xFF000000);
}

CMenuScreen::~CMenuScreen(void)
{
}

void CMenuScreen::Update(float fDeltaTime)
{
	CScreen::Update(fDeltaTime);

	if (m_pGame->m_pHge->Input_GetKeyState(HGEK_SPACE))
	{
		((CMyGame*)m_pGame)->m_pCurScreen = ((CMyGame*)m_pGame)->m_pMission;
	}

	UpdateBtnStatus();
	UpdateArrowsStatus();
	UpdateTitleColor(fDeltaTime);

	
}
void CMenuScreen::Render()
{
	CScreen::Render();
}

void CMenuScreen::InitTexture()
{
	m_pGame->m_pResManager->LoadTexture(L"BG", "Resource/Texture/Menu/menuBg.png");
	m_pGame->m_pResManager->LoadTexture(L"bigArrow", "Resource/Texture/Menu/bigArrow.png");
	m_pGame->m_pResManager->LoadTexture(L"smallArrow", "Resource/Texture/Menu/smallArrow.png");
	m_pGame->m_pResManager->LoadTexture(L"menuBtn", "Resource/Texture/Menu/menuBtn.png");
	m_pGame->m_pResManager->LoadTexture(L"menu", "Resource/Texture/Menu/menu.png");
	m_pGame->m_pResManager->LoadTexture(L"title", "Resource/Texture/Menu/title_gray.png");
}

/************************************************************************/
/* 更新按钮状态  @Panda Young                                            */
/************************************************************************/
void CMenuScreen::UpdateBtnStatus()
{
	float posX,posY;
	m_pGame->m_pHge->Input_GetMousePos(&posX, &posY);
	/*开始按钮*/
	if (posX >= sBtn_PosX && posY >= sBtn_PosY && posX <= ( sBtn_PosX+200 ) && posY <= ( sBtn_PosY+46 ))
	{
		m_pStartBtn->SetTextureRect(BtnHover_TexX, sBtn_TexY, 200, 46);
	}
	/*设置按钮*/
	else if (posX >= setBtn_PosX && posY >= setBtn_PosY && posX <= ( setBtn_PosX+200 ) && posY <= ( setBtn_PosY+46 ))
	{
		m_pSettingBtn->SetTextureRect(BtnHover_TexX, setBtn_TexY, 200, 46);
	}
	/*关于按钮*/
	else if (posX >= aBtn_PosX && posY >= aBtn_PosY && posX <= ( aBtn_PosX+200 ) && posY <= ( aBtn_PosY+46 ))
	{
		m_pAboutBtn->SetTextureRect(BtnHover_TexX, aBtnNormal_TexY, 200, 46);
	}
	/*回复原样*/
	else
	{
		m_pStartBtn->SetTextureRect(BtnNormal_TexX, sBtn_TexY, 200, 46);
		m_pSettingBtn->SetTextureRect(BtnNormal_TexX, setBtn_TexY, 200, 46);
		m_pAboutBtn->SetTextureRect(BtnNormal_TexX, aBtnNormal_TexY, 200, 46);
	}
}

/************************************************************************/
/*                          更新大、小箭头的状态                          */
/************************************************************************/
void CMenuScreen::UpdateArrowsStatus()
{
	D3DXVECTOR3 aPos = m_pBigArrow->GetPos();
	if(aPos.x>850)
	{
		aPos.x = 0;
		aPos.y = 480;
	}
	else
	{
		aPos.x += arrowSpeed;
		aPos.y += -arrowSpeed*0.498;
	}

	m_pBigArrow->SetPos(aPos);
}

void CMenuScreen::UpdateTitleColor( float fDeltaTime )
{
	//更新标题颜色
	sumTime+=fDeltaTime;
	if (sumTime>=0.5)
	{
		int Randnum = rand()%7;
		m_pTitle->SetColor(colorArray[Randnum]);
		sumTime = 0;
	}
}
