//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18


#ifndef Circle_h
#define Circle_h
#include "Shape.h"
#include "Point.h"

class Circle : public Shape{
private:
    double radius;
    Point center;
    
public:
    Circle();
    Circle(int, int, double);
    double calc_area(); //Inherited Shape.h function
    double get_circum() const;
    void set_radius(double);
    void print() const; //Displays information about the circle
    
};

#endif
