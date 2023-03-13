/*
    Documentation: Types of conditional programming
*/

#include <iostream>
//using namespace std;
enum{
    SUMA,     //Se iniciliza en 0 al no tener valor
    RESTA,
    MULTIPLICACION,
    DIVISION    //El ultimo no lleva ,
};


int main(int argc, char** argv){
    int n1=10,n2=5;
    
    std::cout<<"Num1: "<<n1<<" Num2: "<<n2<<std::endl;
    
    //If - else
    std::cout<<"----------Condicion If else------------"<<std::endl;
    if (n1>n2){
        std::cout<<"Numero 1 mayor a numero 2."<<std::endl;
    } 
    else if(n1<n2){
        std::cout<<"Numero 2 mayor a numero 1."<<std::endl;
    }
    else{
        std::cout<<"Numeros iguales."<<std::endl;
    }
    
    //Ternary operator
    std::cout<<"------------Condicion Ternaria---------------"<<std::endl;
    (n1>n2)? std::cout<<"Numero 1 mayor."<<std::endl : std::cout<<"Numero 2 mayor."<<std::endl;
    
    //Ternary initialization
    bool fast=false;
    int speed=(fast)? 80:20;
    std::cout<<"--------------Inicializacion Ternaria---------------"<<std::endl;
    std::cout<<"Velocidad: "<<speed<<std::endl;


    //Switch Case
    int opc=1;
    std::cout<<"--------------Condicion Switch Case---------------"<<std::endl;
    switch(opc){
        case SUMA:{         //Case 0:   
            std::cout<<"Resultado suma: "<<n1+n2<<std::endl;
            break;
        }
        case RESTA:{
            std::cout<<"Resultado resta: "<<n1-n2<<std::endl;
            break;
        }
        case MULTIPLICACION:{
            std::cout<<"Resultado multiplicacion: "<<n1*n2<<std::endl;
            break;
        }
        case DIVISION:{
            std::cout<<"Resultado division: "<<n1/n2<<std::endl;
            break;
        }    
    }

    return 0;
}
