#pragma once
#include "HeroineState.h"

class StandState :public HeroineState
{
public:
	// ͨ�� HeroineState �̳�
	virtual void handleInput(Heroine& heroine, int input) override;
	virtual void update(Heroine& heroine) override;
};

