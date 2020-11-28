#ifndef GREY_H
#define GREY_H
#include "color.h"
#include <iostream>

class Grey :public Color
{
public:
    void paint(std::string shape) override{
        std::cout << "grey " <<shape << std::endl;
    }
};

#endif // GREY_H
