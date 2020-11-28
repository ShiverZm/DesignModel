#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square :public Shape
{
public:
    void draw() override{
        colorPtr->paint("square");
    }
};
#endif // SQUARE_H
