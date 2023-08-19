#pragma once
#include "Figure.h"

class Triangle :public Figure {
protected:
    int a, b, c, A, B, C;


public:

    Triangle();


    void print() override;
};
