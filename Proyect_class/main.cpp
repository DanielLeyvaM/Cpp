/*
    Documentation: Class definition example as a proyect
*/

#include <iostream>
#include "cylinder.cpp"     //Including file created

int main(int argc, char** argv){
    
    Cylinder c1;        //Object created 
 
    c1.set_height(6);
    c1.set_radius(2);
    std::cout<<"Altura: "<<c1.get_height()<<std::endl;
    std::cout<<"Radio: "<<c1.get_radius()<<std::endl;
    std::cout<<"Volumen: "<<c1.volume()<<std::endl;

    Cylinder* c2=new Cylinder();
    std::cout<<"Volumen: "<<c2->volume()<<std::endl;
    delete c2;

    return 0;
}

