/*
    Documentation: Template functions for any data type and implementation
    Note: T parameters have to be of the same data type and parameters are copies
*/

#include <iostream>
#include <typeinfo>
//using namespace std;

//Template prototype
template <typename T> T max(T,T);

int main(int argc, char** argv){

    auto result1=max(2,-7);      //Auto type needed
    std::cout<<"Resultado: "<<result1<<std::endl;       //Int type
    std::cout << "Tipo: " << typeid(result1).name() << std::endl;

    auto result2=max(4.5,3.8);
    std::cout<<"Resultado: "<<result2<<std::endl;       //double type
    std::cout << "Tipo: " << typeid(result2).name() << std::endl;
    
    //Templates sometimes doesnt function as we want (adresses are being compared)
    auto result3=max("Hello","World");
    std::cout<<"Resultado: "<<result3<<std::endl;       //double type
    std::cout << "Tipo: " << typeid(result3).name() << std::endl;

    //Explicit data type
    int a{2};
    double b{3.21};
    std::string c{"Hello"};
    auto result4=max<int>(a,b);       //(double type is converted to int)
    std::cout<<"Resultado: "<<result4<<std::endl;       //int type 
    std::cout << "Tipo: " << typeid(result4).name() << std::endl;

    //auto result5=max<int>(a,c);     //Cant make the conversion string to int
    return 0;
}

//Function implementation
template <typename T> T max(T a, T b){
    return (a>b)? a:b;   
}