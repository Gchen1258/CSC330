//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18


#ifndef POINT_H
#define POINT_H

class Point{ 
private:
    int x, y;
    
public:
    Point(): x(0), y(0){};
    Point(int, int);
    void setX(int);
    void setY(int);
    int getX() const;
    int getY() const;
    double calc_area();
    
};


#endif

