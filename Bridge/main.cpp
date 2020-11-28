#include <iostream>
#include "color.h"
#include "white.h"
#include "black.h"
#include "grey.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"


using namespace std;

int main()
{
    Color* whitePtr = new White;
    Shape* square = new Square;

    square->setColor(whitePtr);
    square->draw();

    Shape* rectange = new Rectangle;

    rectange->setColor(whitePtr);
    rectange->draw();

    return 0;
}
