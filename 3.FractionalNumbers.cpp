/*
    Documentation: Fractional numbers declaration
*/

#include <iostream>
#include <iomanip>
//using namespace std;

int main(int argc, char** argv){
    float n1=1.123456789f;   //f ->float
    double n2=2.123e8;    //No suffix
    long double n3=3.1e-11L;   //L ->Long double

    std::cout<< "Valor: "<<n1<< " Size in bytes: "<<sizeof(n1)<<std::endl; 
    std::cout<< "Valor: "<<n2<< " Size in bytes: "<<sizeof(n2)<<std::endl;
    std::cout<< "Valor: "<<n3<< " Size in bytes: "<<sizeof(n3)<<std::endl;

    //Change precision of a number
    std::cout<<std::setprecision(20);   //Needs #include <iomanip> 
    std::cout<< "Valor: "<<n2<< " Size in bytes: "<<sizeof(n2)<<std::endl;  
   
    return 0;
}
