#ifndef BLACK_H
#define BLACK_H

#include "color.h"
#include <iostream>

class Black :public Color
{
public:
    void paint(std::string shape) override{
        std::cout << "black " << shape << std::endl;
    }
};


#endif // BLACK_H
