#include "ParticleSystem.h"


CParticleSystem::CParticleSystem( D3DXVECTOR3 vPos, const char *pFilename, CSprite *pSprite ):hgeParticleSystem(pFilename, pSprite)
{
	m_vPos = vPos;
	hgeParticleSystem::MoveTo(m_vPos.x, m_vPos.y);
}

CParticleSystem::CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystemInfo *pPsi ):hgeParticleSystem(pPsi)
{
	m_vPos = vPos;
	hgeParticleSystem::MoveTo(m_vPos.x, m_vPos.y);
}

CParticleSystem::CParticleSystem( D3DXVECTOR3 vPos, hgeParticleSystem &ps ):hgeParticleSystem(ps)
{
	m_vPos = vPos;
	hgeParticleSystem::MoveTo(m_vPos.x, m_vPos.y);
}


CParticleSystem::~CParticleSystem(void)
{
}

void CParticleSystem::SetPos(D3DXVECTOR3 vPos, bool isMoveParticles)
{
	m_vPos = vPos;
	hgeParticleSystem::MoveTo(m_vPos.x, m_vPos.y, isMoveParticles);
}

D3DXVECTOR3 CParticleSystem::GetPos()
{
	hgeParticleSystem::GetPosition(&m_vPos.x, &m_vPos.y);
	return m_vPos;
}