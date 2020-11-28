#ifndef SHAPE_H
#define SHAPE_H

#include "color.h"

class Shape
{
protected:
    Color* colorPtr;
public:
    virtual void setColor(Color * color){
        colorPtr = color;
    }

    virtual void draw(){

    }
};

#endif // SHAPE_H
