#pragma once
#include <hge.h>
class CSound
	:public HEFFECT
{
public:
	CSound(void);
	~CSound(void);

public:
	void Play(bool isLoop = true);
	void Pause();
	void Resume();
	void Stop();
	bool IsPlaying();
	void SetPos(float fSeconds);
	float GetPos();
};

