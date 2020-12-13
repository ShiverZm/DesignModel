#pragma once
#include "HeroineState.h"
class JumpingState :
    public HeroineState
{
    // Í¨¹ý HeroineState ¼Ì³Ð
    virtual void handleInput(Heroine& heroine, int input) override;
    virtual void update(Heroine& heroine) override;
};

