/*
    Documentation: Functions types and implementation
    Important: The parameters passed to functions normally are copies of the variables
*/

#include <iostream>
//using namespace std;

//Function Prototype
void intercambio_value(int, int);    //Function with passing param by value
void intercambio_ref(int&, int&);    //Function with passing param by reference
void intercambio_pointer(int*,int*); //Function with passing param by pointers 

int main(int argc, char** argv){
    int n1=10,n2=5;
    std::cout<<"Direcciones de memoria: "<<&n1<<" , "<<&n2<<std::endl;
    std::cout<<"Valores originales: "<<n1<<" , "<<n2<<std::endl;
    
    //Function calling
    std::cout<<"---------------- FUNCTION VALUE -----------------"<<std::endl;
    intercambio_value(n1,n2);
    std::cout<<"Valores despues de funcion value: "<<n1<<" , "<<n2<<std::endl;

    std::cout<<"---------------- FUNCTION REFERENCE -----------------"<<std::endl;
    intercambio_ref(n1,n2);
    std::cout<<"Valores despues de funcion value: "<<n1<<" , "<<n2<<std::endl;

    std::cout<<"---------------- FUNCTION POINTERS -----------------"<<std::endl;
    intercambio_pointer(&n1,&n2);
    std::cout<<"Valores despues de funcion value: "<<n1<<" , "<<n2<<std::endl;

    return 0;
}

//Function implementation
void intercambio_value(int a, int b){
    std::cout<<"Direcciones de memoria: "<<&a<<" , "<<&b<<std::endl;
    int aux;
    aux=a;
    a=b;
    b=aux;
}

void intercambio_ref(int& a, int& b){
    std::cout<<"Direcciones de memoria: "<<&a<<" , "<<&b<<std::endl;
    int aux;
    aux=a;
    a=b;
    b=aux;
}

void intercambio_pointer(int* a, int* b){
    std::cout<<"Direcciones de memoria: "<<a<<" , "<<b<<std::endl;
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}