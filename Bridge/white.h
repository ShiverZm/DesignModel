#ifndef WHITE_H
#define WHITE_H
#include "color.h"
#include <iostream>

class White :public Color
{
public:
    void paint(std::string shape) override{
        std::cout << "white " << shape << std::endl;
    }
};

#endif // WHITE_H
