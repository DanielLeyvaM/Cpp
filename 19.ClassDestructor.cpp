/*
    Documentation: Implementation of destructors
    IMPORTANT: 
    Destructors cant have parameters and are executed automatically (inverse order)
    Are used to delete dinamic memory implementations
*/

#include <iostream>
//using namespace std;

//Classes
class Dog{
    //Attributes
    private:     //Encapsulation
        std::string name;
        int* age{nullptr};
    //Methods
    public:
        Dog(std::string,int age);   //Constructor
        ~Dog();                     //Destructor
};

//Methods
Dog::Dog(std::string n,int a){
    name=n;
    age=new int;    //Dinamic mem
    *age=a;
    std::cout<<"Constructor called for: "<<name<<std::endl;
}

Dog::~Dog(){
    delete age;
    std::cout<<"Destructor called for: "<<name<<std::endl;
}

int main(int argc, char** argv){
    
    Dog pet1("Max",5);        //Object created
    Dog pet2("Steel",2);

    std::cout<<"Done"<<std::endl;

    return 0;
}

