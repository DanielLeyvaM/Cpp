/*
    Documentation: Implementation of Structs (Atributes are public)
    Note: typedef permite usar solamente el nombre de la estructura para crear una instancia
    Sin typedef: struct nombre_estructura nombre_instancia;
    Con typedef: nombre_estructura nombre:instancia;
*/

#include <iostream>
//using namespace std;

//Structure
typedef struct
{
    std::string name;
    int age;
} Dog;

int main(int argc, char** argv){
    Dog d1={"None",0};     //Explicit definition

    d1.name="Max";      //Acces operand .
    d1.age=5;
    std::cout<<"Nombre: "<<d1.name<<std::endl;
    std::cout<<"Edad: "<<d1.age<<std::endl;

    Dog* p;            //Pointers to struct
    p=&d1;
    p->name="Steel";   //Acces operand ->
    p->age=2;
    std::cout<<"Nombre: "<<p->name<<std::endl;
    std::cout<<"Edad: "<<p->age<<std::endl;

    return 0;
}

