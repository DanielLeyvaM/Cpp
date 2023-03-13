/*
    Documentation: POINTERS IMPLEMENTATION
    1. ALWAYS INITIALIZE A POINTER USING {} OR NULLPTR
    2. DONT WRITE INTO A POINTER POINTING TO NULLPTR
    3. PRINT DIR MEMORY IN STRINGS IS NEEDED STATIC_CAST<VOID*> 
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    int n1=20;
    std::cout<<"------------ Puntero a int --------------- "<<std::endl;
    std::cout<<"Direccion Variable: "<<&n1<<std::endl;
    std::cout<<"Valor Variable: "<<n1<<std::endl; 

    int *P{};       //Equal to: int *P=nullptr;
    P=&n1;          //P takes memory direction of our variable

    std::cout<<"Direccion Puntero: "<<P<<std::endl;     //Printing direction
    std::cout<<"Valor Puntero: "<<*P<<std::endl;        //Printing value (Dereferencing)

    std::cout<<"------------ Puntero a char --------------- "<<std::endl;
    char cadena[]="Hola mundo";
    std::cout<<"Direccion cadena: "<<&cadena<<std::endl;
    std::cout<<"Mensaje cadena: "<<cadena<<std::endl;
    
    char *c=cadena;

    //std::cout<<"Direccion puntero: "<<&c<<std::endl;    //INCORRECT TO SHOW DIR
    std::cout<<"Direccion puntero: "<<static_cast<void*>(c)<<std::endl;
    //para imprimir la dirección de memoria de un puntero, es necesario convertirlo a void*

    std::cout<<"Mensaje puntero: "<<c<<std::endl;       //Print text
    std::cout<<"Valor en direccion: "<<*c<<std::endl;   //Print Value in 1st direction
    
     std::cout<<"Direccion puntero: "<<static_cast<void*>(c+2)<<std::endl;
    std::cout<<"Valor en direccion +1: "<<c+2<<std::endl;
    std::cout<<"Valor en direccion +1: "<<*(c+2)<<std::endl;

    return 0;
}
