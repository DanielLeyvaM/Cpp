/*
    Documentation: Functions types and implementation
    Important: 
    The parameters passed to functions normally are copies of the variables
    Output data of functions needs a pointer or reference int* / int& (multiple outputs)
    Output data of functions can be returned (only 1 output)
*/

#include <iostream>
//using namespace std;

//No return     Input 1,     Input 2,     Output(Pointer or Rerence)
void max_str(std::string, std::string, std::string*); 
  
//Return(output)    Input 1,      Input 2
std::string concat(std::string, std::string);

int main(int argc, char** argv){
    std::string max,result;
    std::string s1="Hello";
    std::string s2="World";
    
    max_str(s1,s2,&max);
    std::cout<<"String mayor: "<<max<<std::endl;
    
    result=concat(s1,s2);
    std::cout<<"Concatenacion: "<<result<<std::endl;

    return 0;
}

//Function implementation
void max_str(std::string in1, std::string in2, std::string* out){
    if(in1>in2){
        *out=in1;
    } 
    else if(in2>in1){
        *out=in2;
    }
    else{
        *out="Same value";
    }
}

std::string concat(std::string in1,std::string in2){
    std::string out=in1+in2;
    return out;
}