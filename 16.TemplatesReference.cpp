/*
    Documentation: Template functions for any data type and implementation
    Note: T parameters have to be of the same data type
*/

#include <iostream>
#include <cstring>
//using namespace std;

//Template prototype
template <typename T> T max_value(T,T);         //Template by value
template <typename T> T max_ref(T&,T&);         //Template by reference

//Template specialization needs to make an overload in another template (same name)
template <> const char* max_value  <const char*>  (const char*, const char*); 
    
int main(int argc, char** argv){
    int a=2,b=-7;
    std::cout<<"Adress a: "<<&a<<" / Adress b: "<<&b<<std::endl;
    
    std::cout<<"------------- TEMPLATE BY VALUE-------------------"<<std::endl;
    std::cout<<"Resultado: "<<max_value(a,b)<<std::endl;       

    std::cout<<"------------- TEMPLATE BY REFERENCE -------------------"<<std::endl;
    std::cout<<"Resultado: "<<max_ref(a,b)<<std::endl;       
    
    std::cout<<"------------- TEMPLATE SPECIALIZATION -------------------"<<std::endl;
    std::cout<<"Resultado: "<<max_value("Hello","World")<<std::endl; 
    return 0;
}

//Function implementation
template <typename T> T max_value(T a, T b){
    std::cout<<"Adress a: "<<&a<<" / Adress b: "<<&b<<std::endl;
    return (a>b)? a:b;   
}

template <typename T> T max_ref(T& a, T& b){
    std::cout<<"Adress a: "<<&a<<" / Adress b: "<<&b<<std::endl;
    return (a>b)? a:b;   
}

template <> const char* max_value  <const char*>  (const char* a, const char* b){
    const char* result =std::strcmp(a,b)>0? a:b;
    return result;
}