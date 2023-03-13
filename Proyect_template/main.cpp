/*
    Documentation: Template for c++ proyects
*/

#include <iostream>
#include "file.cpp"     //Including file created

//using namespace std;

int main(int argc, char** argv){
    int n1=5,n2=3;

    //Fuction Calling 
    std::cout<<"Result of sum: " <<n1<<" + "<<n2<< " = " <<add_numbers(n1,n2)<<std::endl;
    std::cout<<"Result of multiply: " <<n1<<" * "<<n2<< " = " <<mult_numbers(n1,n2)<<std::endl;

    return 0;
}

