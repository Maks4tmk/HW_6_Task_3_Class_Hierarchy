// HW 6 Задача 3 Иерархия классов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"


void print_info(Figure* figure) {
    figure->print();
}


int main()
{
    setlocale(LC_ALL, "ru");

    Triangle triangle;
    print_info(&triangle);
    Right_triangle rig_triangle;
    print_info(&rig_triangle);
    Isosceles_triangle iso_triangle;
    print_info(&iso_triangle);
    Equilateral_triangle equ_triangle;
    print_info(&equ_triangle);

    Quadrilateral quadrilateral;
    print_info(&quadrilateral);
    Rectangle rectangle;
    print_info(&rectangle);
    Square Square;
    print_info(&Square);
    Parallelogram parallelogram;
    print_info(&parallelogram);
    Rhomb rhomb;
    print_info(&rhomb);
}