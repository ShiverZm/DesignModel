#pragma once
#include "HeroineState.h"
class JumpingState :
    public HeroineState
{
    // ͨ�� HeroineState �̳�
    virtual void handleInput(Heroine& heroine, int input) override;
    virtual void update(Heroine& heroine) override;
};

