#include <stdio.h>
#include "Heroine.h"
#include "StandState.h"
#include "JumpingState.h"
#include <stdlib.h>

void main() {

	Heroine* heroinePtr = new Heroine;

	heroinePtr->setState(new StandState());

	heroinePtr->handleInput(static_cast<int>(Heroine::StateCode::Stand));

	heroinePtr->setState(new JumpingState());

	heroinePtr->handleInput(static_cast<int>(Heroine::StateCode::Jump));

	system("pause");
}