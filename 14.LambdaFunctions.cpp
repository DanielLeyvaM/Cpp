/*
    Documentation: Lambda Functions types and implementation
    
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    /*  LAMBDA FUNCTIONS
        [capture list](params)->return type {
            instructons
            return(optional)
        };
    */

    //Call lambda funcion directly (it only executes once)
    std::cout<<"--------------- Lambda directly ------------------"<<std::endl;
    [](int a,int b){
       std::cout<<"Suma de "<<a<<" + "<<b<<" = "<<a+b<<std::endl; 
    }(10,5);

    //Call lambda functions multiple times setting a name
    std::cout<<"--------------- Lambda multiple times ------------------"<<std::endl;
    auto func= [](int a,int b){
       std::cout<<"Suma de "<<a<<" + "<<b<<" = "<<a+b<<std::endl; 
    };

    func(1,2);
    func(3,4);

    //Lambda function with return
    std::cout<<"--------------- Lambda with return ------------------"<<std::endl;
    auto result= [](int a,int b){
       return a+b;
    };
    std::cout<<"Resultado: "<<result(10,10)<<std::endl;
    auto n=result(2,2);
    std::cout<<"Resultado: "<<n<<std::endl;
    
    //Lambda function with explicit return type
    std::cout<<"--------------- Lambda explicit return ------------------"<<std::endl;
    auto sum= [](float a,float b)->int{     //Returning int
       return a+b;
    };
    std::cout<<"Resultado: "<<result(2.4,3.4)<<std::endl;

    int x=10,y=5;
    std::cout<<"Original Dir x: "<<&x<<" / Dir y: "<<&y<<std::endl;

    //Capture Value (Copy of original value)
    std::cout<<"--------------- Lambda capture value ------------------"<<std::endl;
    auto value=[x,y](){      //Caturing everything by value[=]
        std::cout<<"Value Dir x: "<<&x<<" / Dir y:"<<&y<<std::endl;
    };
    value();

    std::cout<<"-------------- Lambda capture by reference -------------"<<std::endl;
    auto reference=[&x,&y](){    //Caturing everything by value[&]
        std::cout<<"Reference Dir x: "<<&x<<" / Dir y: "<<&y<<std::endl;
    };
    reference();

    return 0;
}