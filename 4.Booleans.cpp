/*
    Documentation: Boolean data type
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    bool led1=false;  
    bool led2=true;
    
    std::cout<< "LED1: "<<led1<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    std::cout<< "NEG: "<<!led1<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    std::cout<< "LED2: "<<led2<< " Size in bytes: "<<sizeof(led2)<<std::endl;
    std::cout<< "NEG: "<<!led2<< " Size in bytes: "<<sizeof(led2)<<std::endl;

    std::cout<< "AND: "<<(led1 && led2)<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    std::cout<< "OR: "<<(led1 || led2)<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    std::cout<< "XOR: "<<(led1 ^ led2)<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    //Making logical operations 1°->OR, 2°->NEG(left to right operations), 3°->AND
    std::cout<< "OPERATIONS: "<<(!(led1 || led2) && led1)<< " Size in bytes: "<<sizeof(led1)<<std::endl;

    //Imprimir representacion true or false
    std::cout<<std::boolalpha;
    std::cout<< "LED1: "<<led1<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    std::cout<< "LED2: "<<led2<< " Size in bytes: "<<sizeof(led1)<<std::endl;
    return 0;
}
