//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18

#ifndef RTriangle_h
#define RTriangle_h

#include "Shape.h"

class RTriangle : public Shape{
private:
    double side1;
    double side2;
    double hypotenuse;
    
public:
    RTriangle(): side1(0.0), side2(0.0), hypotenuse(0.0){};
    RTriangle(double, double);
    double calc_area();     //Uses areas functions of Shape.h
    void set_side1(double);
    void set_side2(double);
    void print() const; //Displays sides
    double get_hypotenuse(); //Calculates and sets hypotenuse (return hypotenuse)
};


#endif
