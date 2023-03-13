//Functions and methods Implementation
#include "cylinder.h"         //Including header file

//Methods
double Cylinder::get_radius(){
    return radius;
}
double Cylinder::get_height(){
    return height;
}

void Cylinder::set_radius(double r){
    radius=r;
}
void Cylinder::set_height(double h){
    height=h;
}

double Cylinder::volume(){
    return PI*radius*radius*height;
}