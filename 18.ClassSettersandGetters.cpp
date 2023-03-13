/*
    Documentation: Implementation of setters and getters in classes  
    IMPORTANT: 
    this-> operand avoid conflicting names in setters and getters
*/

#include <iostream>
//using namespace std;

//Classes
class Cylinder{
    //Attributes
    private:     //Encapsulation
        double radius{};
        double height{};
    //Methods
    public:
        //Getters
        double get_radius();
        double get_height();
        //Setters
        void set_radius(double);
        void set_height(double);
        //Setters with pointer
        Cylinder* p_radius(double);
        Cylinder* p_height(double);
        //Methods
        double volume();
};

//Methods
double Cylinder::get_radius(){
    return radius;
}
double Cylinder::get_height(){
    return height;
}
void Cylinder::set_radius(double radius){
    //radius=radius;    //Conflicting names
    this->radius=radius;
}
void Cylinder::set_height(double height){
    //height=height;    //Conflicting names
    this->height=height;
}
Cylinder* Cylinder::p_radius(double radius){
    this->radius=radius;
    return this;
}
Cylinder* Cylinder::p_height(double height){
    this->height=height;
    return this;
}
double Cylinder::volume(){
    return 3.14159*radius*radius*height;
}


int main(int argc, char** argv){
    
    Cylinder c1;        //Object created 
    //std::cout<<"Altura: "<<c1.height<<std::endl;    //Private atributes

    c1.set_height(4);
    c1.set_radius(2);

    std::cout<<"Altura: "<<c1.get_height()<<std::endl;
    std::cout<<"Radio: "<<c1.get_radius()<<std::endl;
    std::cout<<"Volumen: "<<c1.volume()<<std::endl;
    
    Cylinder* c2=new Cylinder(); //Object created using pointer and dinamic mem (heap)
    //c2.set_height(6);
    //c2.set_radius(3);
    c2->p_height(6)->p_radius(3);   //Chained calls using setters with pointers

    std::cout<<"Altura: "<<c2->get_height()<<std::endl;
    std::cout<<"Radio: "<<c2->get_radius()<<std::endl;
    std::cout<<"Volumen: "<<c2->volume()<<std::endl;
    
    delete c2;  //Release memory

    return 0;
}

