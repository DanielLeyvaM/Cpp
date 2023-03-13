/*
    Documentation: Functions types and implementation
    Important: The parameters passed to functions are copies of the variables
*/

#include <iostream>
//using namespace std;

//Function Prototype
void comprobar_edad(int);    //Void function (No return) only used to print
int num_mayor(int, int);    //Function that returns an int data

int main(int argc, char** argv){
    
    //Function calling
    std::cout<<"---------------- FUNCTION VOID -----------------"<<std::endl;
    int n=17;
    comprobar_edad(n);
    comprobar_edad(22);
    
    std::cout<<"---------------- FUNCTION INT -----------------"<<std::endl;
    int a=5,b=1,result;
    result=num_mayor(a,b);          //Saving the return value
    std::cout<<"Numero mayor: "<<result<<std::endl;     //Using variables

    std::cout<<"Numero mayor: "<<num_mayor(10,100)<<std::endl;    //Using data directly

    return 0;
}

//Function implementation
void comprobar_edad(int a){
    if(a>17)
        std::cout<<"El usuario es mayor de edad"<<std::endl;
    else
        std::cout<<"El usuario es menor de edad"<<std::endl;
}

int num_mayor(int a, int b){
    if(a>b)
        return a;
    else
        return b;  
}