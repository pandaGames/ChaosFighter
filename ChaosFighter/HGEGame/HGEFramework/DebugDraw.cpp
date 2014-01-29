#include "DebugDraw.h"
#include "Game.h"

CDebugDraw::CDebugDraw(HGE * pHge):b2Draw()
{
	m_pHge = pHge;
	m_drawFlags = 0;
	m_drawFlags += 1 * e_shapeBit;
	m_drawFlags += 1 * e_jointBit;
	m_drawFlags += 1 * e_aabbBit;
	m_drawFlags += 1 * e_pairBit;
	m_drawFlags += 1 * e_centerOfMassBit;
	SetFlags(m_drawFlags);
}


CDebugDraw::~CDebugDraw(void)
{
}

void CDebugDraw::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color)
{
	//for (int i=0;i<vertexCount;i++)
	//{
	//	if (i < vertexCount-1)
	//	{
	//		DrawSegment(vertices[i],vertices[i+1],color);
	//	}
	//	else
	//	{
	//		DrawSegment(vertices[i],vertices[0],color);
	//	}
	//}
}
void CDebugDraw::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color)
{
	for (int i=0;i<vertexCount;i++)
	{
		if (i < vertexCount-1)
		{
			DrawSegment(vertices[i],vertices[i+1],color);
		}
		else
		{
			DrawSegment(vertices[i],vertices[0],color);
		}
	}
}
void CDebugDraw::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color)
{

}
void CDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color)
{

}
void CDebugDraw::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color)
{
	b2Vec2 s1,s2;
	WorldToScreen(&s1,&p1);
	WorldToScreen(&s2,&p2);
	DWORD dColor = 0xff00ff00;
	m_pHge->Gfx_RenderLine(s1.x,s1.y,s2.x,s2.y,dColor);
}
void CDebugDraw::DrawPoint(const b2Vec2& p, float32 size, const b2Color& color)
{
	b2Vec2 s1,s2,s3,s4;
	s1.x = p.x-size/2;
	s1.y = p.y-size/2;
	s2.x = p.x+size/2;
	s2.y = p.y-size/2;
	s3.x = p.x+size/2;
	s3.y = p.y+size/2;
	s4.x = p.x-size/2;
	s4.y = p.y+size/2;
	m_pHge->Gfx_RenderLine(s1.x,s1.y,s2.x,s2.y,0xFFFF0000);
	m_pHge->Gfx_RenderLine(s2.x,s2.y,s3.x,s3.y,0xFFFF0000);
	m_pHge->Gfx_RenderLine(s3.x,s3.y,s4.x,s4.y,0xFFFF0000);
	m_pHge->Gfx_RenderLine(s4.x,s4.y,s1.x,s1.y,0xFFFF0000);
	m_pHge->Gfx_RenderLine(s1.x,s1.y,s3.x,s3.y,0xFFFF0000);
	m_pHge->Gfx_RenderLine(s2.x,s2.y,s4.x,s4.y,0xFFFF0000);
}
void CDebugDraw::DrawTransform(const b2Transform& xf)
{

}
b2Vec2 * CDebugDraw::WorldToScreen(b2Vec2 * pOut,const b2Vec2 * pIn)
{
	CGame::WorldToScreen(pOut,pIn);

	return pOut;
}