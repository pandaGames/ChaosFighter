#pragma once
#include <Box2D.h>
#include <hge.h>
class CDebugDraw:
	public b2Draw
{
public:
	CDebugDraw(HGE * pHge);
	~CDebugDraw(void);

public:
	void DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
	void DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color);
	void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
	void DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color);
	void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
	void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
	void DrawTransform(const b2Transform& xf);
private:
	b2Vec2 * WorldToScreen(b2Vec2 * pOut,const b2Vec2 * pIn);
private:
	HGE * m_pHge;
};

