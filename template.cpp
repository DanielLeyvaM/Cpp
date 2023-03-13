/*
    Documentation: Template for c++ programs
*/

#include <iostream>
//using namespace std;

int add_numbers(int, int);  //Function prototype

int main(int argc, char** argv){
    int n1=5,n2=3;
    
    std::cout<< "Result of sum: " <<n1<< "+" <<n2<< "=" << add_numbers(n1,n2) <<std::endl;
    return 0;
}

int add_numbers(int a,int b){
    return a+b;
} 
