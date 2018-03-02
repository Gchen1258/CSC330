//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18

#include "Point.h"

Point::Point(int xVal, int yVal) : x(xVal), y(yVal)
{
    
}

void Point::setX(int xVal)
{
    x = xVal;
}

void Point::setY(int yVal)
{
    y = yVal;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

double Point::calc_area()
{
    return 0;
}
