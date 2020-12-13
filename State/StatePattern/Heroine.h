#pragma once

#include "HeroineState.h"
class Heroine
{

public:
	enum class StateCode {
		Stand = 1,
		Jump  = 2,
	};

	void setState(HeroineState* state) {
		this->state = state;
	}

	virtual void handleInput(int input) {
		if (state != nullptr) {
			state->handleInput(*this, input);
		}
	}

	virtual void update()
	{
		state->update(*this);
	}

private:
	HeroineState* state = nullptr;
};

