#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle :public Shape
{
public:
    void draw() override{
        colorPtr->paint("rectangle");
    }
};

#endif // RECTANGLE_H
