#pragma once
class Heroine;

class HeroineState
{
public:
	virtual ~HeroineState() {}
	virtual void handleInput(Heroine& heroine, int input) = 0;
	virtual void update(Heroine& heroine) = 0;
};

