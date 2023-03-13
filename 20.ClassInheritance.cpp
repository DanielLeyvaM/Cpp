/*
    Documentation: Implementation of Inheritance
    :public-> Methods/attributes remains with same encapsulation to the inherited class.
    :protected-> Public methods/attributes become protected to the inherited class, 
    private and protected members remains the same.
    :private-> All methods/attributes become private to the inherited class, no matter 
    his encapsulation.
    IMPORTANT: Always make a default constructor especially to inheritance
*/

#include <iostream>

//-------------------------------- MAIN CLASS -----------------------------------
class Person{
    //Attributes
    protected:
        std::string name="None";
        int age=0;
    //Methods
    public:
        Person()=default;
        Person(std::string,int age);   //Constructor
        std::string get_name();
        int get_age();
        void set_name(std::string);
        void set_age(int);
};

//Methods
Person::Person(std::string name,int age){
    this->name=name;
    this->age=age;
}
std::string Person::get_name(){
    return name;
}
int Person::get_age(){
    return age;
}
//Required with private attributes
void Person::set_name(std::string name){
    this->name=name;
}
void Person::set_age(int age){
    this->age=age;
}

//------------------------------ INHERITANCE ---------------------------------------

class Player:public Person{  
    //Atributes
    private:
        std::string game;
    //Methods
    public:
        Player()=default;
        Player(std::string,int,std::string);   //Constructor
        std::string get_game();
};

//Methods
Player::Player(std::string name,int age,std::string game){
    this->name=name;
    this->age=age;    //With protected attributes
    this->game=game;    //With protected attributes
}
std::string Player::get_game(){
    return game;
}

//--------------------------------------------------------------------------------------


int main(int argc, char** argv){
    
    Player p1("DANIEL",22,"Soccer");
    //p1.name("Daniel");    //Using setters and private attributes
    //p1.set_age(22);       //Using setters and private attributes

    std::cout<<"Name: "<<p1.get_name()<<" Age: "<<p1.get_age()<<" Game: "<<
    p1.get_game()<<std::endl;

    return 0;
}
