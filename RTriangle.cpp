//Lab_2 Inheritance/Composition
//Gary Chen
//Feb-21-18


#include "RTriangle.h"
#include <math.h>
#include <iostream>
using namespace std;
RTriangle::RTriangle(double len1, double len2){
    side1 = len1;
    side2 = len2;
    hypotenuse = get_hypotenuse();
} //Set to initialize hypotenuse given two sides


double RTriangle::calc_area(){
    Shape::set_area(.5*side1*side2);
    return Shape::calc_area();
}

void RTriangle::set_side1(double s1){
    side1 = s1;
}

double RTriangle::get_hypotenuse(){
    hypotenuse = sqrt(pow(side1, 2)+pow(side2, 2));
    return hypotenuse;
}

void RTriangle::print()const{
    cout << "Side 1: " << side1 << endl;
    cout << "Side 2: " << side2 << endl;
    cout << "Hypotenuse: " << hypotenuse << endl;
}
