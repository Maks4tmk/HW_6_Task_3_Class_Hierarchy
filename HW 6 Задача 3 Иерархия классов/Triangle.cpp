#include "Triangle.h"

Triangle::Triangle() {
        name = "�����������";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 70;
}

void Triangle :: print() {
    std::cout << name << ":" << std::endl;
    std::cout << "�������: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
    std::cout << "����: " << "� = " << A << " B = " << B << " C = " << C << std::endl;
    std::cout << std::endl;
}