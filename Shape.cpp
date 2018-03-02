//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18

#include "Shape.h"

Shape::Shape(double x) : area(x)
{
    
}

double Shape::calc_area()
{
    return area;
}

void Shape::set_area(double a)
{
    area = a;
}

