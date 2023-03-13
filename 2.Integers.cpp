/*
    Documentation: Integers declaration and modifiers
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    int n1;    //Garbage value
    int n2{};   //Initialize a 0
    int n3=0;   

    std::cout<< "Valor: "<<n1<<std::endl;
    std::cout<< "Valor: "<<n2<<std::endl;
    std::cout<< "Valor: "<<n3<<std::endl;
    
    //Modifiers (Only works with integers)
    std::cout<< "-----------Modifiers-----------"<<std::endl;
    unsigned int n4=3;
    //unisgned int n5=-3;   //Error 
    signed int n5=-4;

    short int n6=5;
    long int n7=6;
    long long int n8=7;

    std::cout<< "Valor: "<<n4<< " Size in bytes: "<<sizeof(n4)<<std::endl;
    std::cout<< "Valor: "<<n5<< " Size in bytes: "<<sizeof(n5)<<std::endl;
    std::cout<< "Valor: "<<n6<< " Size in bytes: "<<sizeof(n6)<<std::endl;
    std::cout<< "Valor: "<<n7<< " Size in bytes: "<<sizeof(n7)<<std::endl;
    std::cout<< "Valor: "<<n8<< " Size in bytes: "<<sizeof(n8)<<std::endl;
   
    return 0;
}
