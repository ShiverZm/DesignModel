#include "JumpingState.h"
#include <stdio.h>

void JumpingState::handleInput(Heroine& heroine, int input)
{
	if (input == 2) {
		printf("jumping state \n");
	}
}

void JumpingState::update(Heroine& heroine)
{
}
