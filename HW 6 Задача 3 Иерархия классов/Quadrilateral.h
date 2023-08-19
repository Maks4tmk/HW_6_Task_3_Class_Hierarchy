#pragma once
#include "Figure.h"

class Quadrilateral : public Figure {
protected:
    int a, b, c, d, A, B, C, D;
public:
    Quadrilateral();


    void print() override;
};
