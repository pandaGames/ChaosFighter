#include "MyGame.h"
#include <hgefont.h>

#pragma comment (lib,"..\\HGE GameEngine Lite Version\\lib\\vc\\hge.lib")
#pragma comment (lib,"..\\HGE GameEngine Lite Version\\lib\\vc\\hgehelp.lib")
#pragma comment (lib,"Box2D\\debug\\Box2D.lib")

CGame *g_pGame = new CMyGame();

bool FrameFunc()
{
	if (g_pGame->m_pHge->Input_GetKeyState(HGEK_ESCAPE)) return true;

	float dt=g_pGame->m_pHge->Timer_GetDelta();
	g_pGame->FrameFunc(dt);
	
	return false;
}

bool RenderFunc()
{	
	// Begin rendering quads.
	// This function must be called
	// before any actual rendering.
	g_pGame->m_pHge->Gfx_BeginScene();
	g_pGame->m_pHge->Gfx_Clear(0);
	g_pGame->RenderFunc();
	// End rendering and update the screen
	g_pGame->m_pHge->Gfx_EndScene();

	// RenderFunc should always return false
	return false;
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// Here we use global pointer to HGE interface.
	// Instead you may use hgeCreate() every
	// time you need access to HGE. Just be sure to
	// have a corresponding hge->Release()
	// for each call to hgeCreate()
	g_pGame->m_pHge = hgeCreate(HGE_VERSION);

	// Set up frame function, render function and window title
	g_pGame->m_pHge->System_SetState(HGE_FRAMEFUNC, FrameFunc);
	g_pGame->m_pHge->System_SetState(HGE_RENDERFUNC, RenderFunc);
	g_pGame->m_pHge->System_SetState(HGE_TITLE, "HGEGame");

	//Set Mouse Hide
	g_pGame->m_pHge->System_SetState(HGE_HIDEMOUSE,true);

	//Set MAX FPS
	g_pGame->m_pHge->System_SetState(HGE_FPS, 60);

	// Run in windowed mode
	// Default window size is 800x600
	g_pGame->m_pHge->System_SetState(HGE_WINDOWED, true);
	g_pGame->m_pHge->System_SetState(HGE_SCREENWIDTH,SCREEN_WIDTH);
	g_pGame->m_pHge->System_SetState(HGE_SCREENHEIGHT,SCREEN_HEIGHT);

	// Don't use BASS for sound
	g_pGame->m_pHge->System_SetState(HGE_USESOUND, false);

	//Set Logo Hide
	g_pGame->m_pHge->System_SetState(HGE_SHOWSPLASH,false);

	// Tries to initiate HGE with the states set.
	// If something goes wrong, "false" is returned
	// and more specific description of what have
	// happened can be read with System_GetErrorMessage().
	if(g_pGame->m_pHge->System_Initiate())
	{
		//InitGame
		g_pGame->InitGame();

		// Starts running FrameFunc().
		// Note that the execution "stops" here
		// until "true" is returned from FrameFunc().
		g_pGame->m_pHge->System_Start();

		//Release
		g_pGame->Release();
	}
	else
	{	
		// If HGE initialization failed show error message
		MessageBox(NULL, (LPCWSTR)g_pGame->m_pHge->System_GetErrorMessage(), L"Error", MB_OK | MB_ICONERROR | MB_APPLMODAL);
	}

	// Now ESC has been pressed or the user
	// has closed the window by other means.

	// Restore video mode and free
	// all allocated resources
	g_pGame->m_pHge->System_Shutdown();

	// Release the HGE interface.
	// If there are no more references,
	// the HGE object will be deleted.
	g_pGame->m_pHge->Release();

	return 0;
}
