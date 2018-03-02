//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18


#ifndef SHAPE_H
#define SHAPE_H

class Shape{
private:
    double area;
    
public:
    Shape() : area(0.0){};
    Shape(double);
    double calc_area(); 
    void set_area(double);
    
};



#endif
