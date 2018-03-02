//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18

#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;

Circle::Circle(){
    center.setX(0);
    center.setY(0);
    radius = 0;
}

Circle::Circle(int xVal, int yVal, double zVal){
    center.setX(xVal);
    center.setY(yVal);
    radius = zVal;
}

double Circle::calc_area(){
    Shape::set_area(M_PI*pow(radius, 2.0));
    return Shape::calc_area();
}

double Circle::get_circum() const{
    return 2*M_PI*radius;
}

void Circle::set_radius(double r){
    radius = r;
}

void Circle::print() const{
    cout << "Radius: " << radius << endl;
    cout << "Center: (" << center.getX() << ',' << center.getY() << ')' << endl;
    cout << "Circumference: " << get_circum() <<  endl;
}
