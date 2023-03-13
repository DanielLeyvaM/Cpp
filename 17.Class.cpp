/*
    Documentation: Implementation of classes  
    IMPORTANT:
    1. Public attributes allows access from inside class and from outside (main).
    2. Protected attributes allows changes only from inside class using constructors or 
    methods not from outside (main).
    3. Private attributes dont allow access from inside either outside class (main).   
    Class name with first letter Capital (Cylinder)
    Private encapsulation is the default if another is not declared
    If any constructor is defined the compiler make an empty one
    Always make a default constructor especially to inheritance
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
        Cylinder()=default;          //Constructor by default
        Cylinder(double,double);     //Constructor with parameters   
        double volume();
};

//Constructors
/*
Cylinder::Cylinder(){
    height=4;
    radius=2;
}
*/

Cylinder::Cylinder(double r,double h){
    radius=r;
    height=h;
}

//Methods Implementation
double Cylinder::volume(){
    return 3.14159*radius*radius*height;
}

int main(int argc, char** argv){
    
    Cylinder c1;        //Object created using default constructor
    //c1.height=8.0;    //Private atributes are inaccesible except using public methods
    std::cout<<"Volumen: "<<c1.volume()<<std::endl;  //Acces method .
    
    Cylinder c2(2,4);   //Object created using constructor
    std::cout<<"Volumen: "<<c2.volume()<<std::endl;

    Cylinder* c3=new Cylinder(3,6); //Object created using pointer and dinamic mem (heap)
    std::cout<<"Volumen: "<<c3->volume()<<std::endl;    //Acces method -> / (c3*).volume
    delete c3;  //Release memory

    return 0;
}

