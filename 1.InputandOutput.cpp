/*
    Documentation: Input and output functions
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    int age;
    std::string name;

    std::cout<< "Ingrese nombre y edad: "<<std::endl;
    //Data without spaces std::cin>>
    //std::cin>> name >> age;
    
    //Data with spaces std::getline(entrada,variable)
    std::getline(std::cin, name);
    std::cin>>age;
    std::cout<< "Usuario: " <<name<< " tiene " <<age<< "." << std::endl;
    return 0;
}
