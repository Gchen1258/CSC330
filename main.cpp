//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18

#include "Circle.h"
#include "RTriangle.h"
#include <iostream>
using namespace std;

int main(){
    RTriangle T1(3.0, 4.0);
    Circle C1(3,2, 2.0);
    
    cout << "Triangle: \n";
    T1.print();
    cout << "Area: " << T1.calc_area() << endl;
    cout << '\n' << "Circle: \n";
    C1.print();
    cout << "Area: " << C1.calc_area() << endl;
}
