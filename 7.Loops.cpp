/*
    Documentation: Loops declarations
*/

#include <iostream>
//using namespace std;
#define REPEAT 5

int main(int argc, char** argv){

    //For cicle
    //size_t i=0; -> A representation of unsigned long long in c++ standar library
    
    std::cout<<"Size_t: "<<sizeof(size_t)<<std::endl;
    std::cout<<"Unisgned long long: "<<sizeof(unsigned long long)<<std::endl; 

    std::cout<<"--------FOR LOOP-----------"<<std::endl; 
    //(start point; End condition; increment/decrement)
    for(size_t i=0; i<REPEAT; i++){   
        std::cout<<"Iteracion : "<<i<<std::endl; 
    }
    //std::cout<<"Valor i: "<<i<<std::endl;   //Out of scope


    //While loop
    int j=0;    //Start point
    std::cout<<"----------WHILE LOOP-----------"<<std::endl; 
    while (j<REPEAT){   //End condition
        std::cout<<"Iteracion : "<<j<<std::endl; 
        j++;    //Incremen/Decrement
    }
    
    
    //Do While loop
    int z=0;    //Start point
    std::cout<<"----------DO WHILE LOOP-----------"<<std::endl; 
    do{
        std::cout<<"Iteracion : "<<z<<std::endl; 
        z++;    //Incremen/Decrement
    }
    while (z<REPEAT);   //End condition

    return 0;
}
