#pragma once
#include"Quadrilateral.h"

Quadrilateral :: Quadrilateral() {
    name = "��������������";
    a = 10;
    b = 20;
    c = 30;
    d = 40;
    A = 50;
    B = 60;
    C = 70;
    D = 80;
}

void Quadrilateral :: print(){
    std::cout << name << ":" << std::endl;
    std::cout << "�������: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    std::cout << "����: " << "� = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    std::cout << std::endl;
}