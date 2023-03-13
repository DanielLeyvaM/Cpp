/*
    Documentation: Math functions from cmath header -> 
    https://en.cppreference.com/w/cpp/header
*/

#include <iostream>
#include <cmath>
//using namespace std;

int main(int argc, char** argv){
    double n1=5.7;

    //Power-> std::pow(number,exponent)
    std::cout<<"2^8 is equal to: "<<std::pow(2,8)<<std::endl;

    //Square root-> std::sqrt(number)
    std::cout<<"Square root of 81 is: "<<std::sqrt(81)<<std::endl;

    //Ceil and floor->    std::floor(number) / std::ceil(number)
    std::cout<<"Number: "<<n1<<std::endl;
    std::cout<<"Floor: "<<std::floor(n1)<<std::endl;
    std::cout<<"Ceil: "<<std::ceil(n1)<<std::endl;
    
    //Exponential-> std::exp(double)
    std::cout<<"e^5 is equal to: "<<std::exp(5)<<std::endl;
   
    //Log-> std::log(number) / std::log2(number)   / std::log10(number)
    std::cout<<"Log of 256 is: "<<std::log2(256)<<std::endl;

    return 0;
}
