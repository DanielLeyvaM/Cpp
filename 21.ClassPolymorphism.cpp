/*
    Documentation: Implementation of Polymorphism (virtual keyword only in prototype)
    Note: Use override keyword to override and use method in an inherited class.
          Override every function if we use overload functions (functions with same
          name but different parameters) otherwise overload functions will be hided.
          Virtual destructors to delete correctly dinamic memory in virtual functions.
          Never call virtual funtions from constructors or destructors.
          Is possible to make a class abstract by adding to a virtual function const=0;
          (There is no need for function description, inherited classes have to override
          method to avoid becoming abstract, you cant create objects from abstract class) 
*/

#include <iostream>

//-------------------------------- MAIN CLASS -----------------------------------
class Shape{
    //Attributes
    protected:
        std::string data="";
    //Methods
    public:
        Shape()=default;
        Shape(std::string);         //Constructor
        virtual ~Shape();
        //int info();
        virtual void info();      //Base virtual function (1st level - info)
        //virtual void info() const=0;  //Making class abstract (Dont need function description) 
};

//Methods
Shape::Shape(std::string data){
    this->data=data;
}
Shape::~Shape(){
    std::cout<<"Destructor called for Shape"<<std::endl;
}
void Shape::info(){
    std::cout<<"Data: "<<data<<std::endl;
} 

//------------------------------ Dimension2D ---------------------------------------

class Dimension2D:public Shape{  
    //Atributes
    protected:
        double lenght;
        double width;
    //Methods
    public:
        Dimension2D()=default;
        Dimension2D(std::string);   //Constructor
        virtual ~Dimension2D();
        //int info();
        virtual void info() override;  //Override of method to use it (2nd level - info)
        virtual double area();   //Virtual function (1st level in inherited class - area)
};

//Methods
Dimension2D::Dimension2D(std::string data){
    this->data=data;   
}
Dimension2D::~Dimension2D(){
    std::cout<<"Destructor called for 2D"<<std::endl;
}
void Dimension2D::info(){
    std::cout<<"Data: "<<data<<std::endl;
} 
double Dimension2D::area(){
    return 0;
}

//--------------------------------- RECTANGLE -----------------------------------------

class Rectangle:public Dimension2D{  
    //Atributes
    
    //Methods
    public:
        Rectangle()=default;
        Rectangle(std::string,double,double);   //Constructor
        virtual ~Rectangle();
        //Making method to not be override again
        virtual void info() override final; //Override of method to use it (3rd level - info)  
        virtual double area() override;     //Virtual function (2nd level of inherited class - area)
};

//Methods
Rectangle::Rectangle(std::string data,double lenght,double width){
    this->data=data;
    this->lenght=lenght;   
    this->width=width;
}
Rectangle::~Rectangle(){
    std::cout<<"Destructor called for Rectangle"<<std::endl;
}
void Rectangle::info(){
    std::cout<<"Data: "<<data<<" Lenght: "<<lenght<<" Width: "<<width<<std::endl;
} 
double Rectangle::area(){
    return lenght*width;
}

//--------------------------------- Triangle -----------------------------------------

class Triangle final:public Dimension2D{    //Making class final to avoid inheritance
    //Atributes
    
    //Methods
    public:
        Triangle()=default;
        Triangle(std::string,double,double);   //Constructor
        virtual ~Triangle();
        //Making method to not be override again
        virtual void info() override final; //Override of method to use it (3rd level - info)  
        virtual double area() override;     //Virtual function (2nd level of inherited class - area)
};

//Methods
Triangle::Triangle(std::string data,double lenght,double width){
    this->data=data;
    this->lenght=lenght;   
    this->width=width;
}
Triangle::~Triangle(){
    std::cout<<"Destructor called for Triangle"<<std::endl;
}
void Triangle::info(){
    std::cout<<"Data: "<<data<<" Lenght: "<<lenght<<" Width: "<<width<<std::endl;
} 
double Triangle::area(){
    return (lenght*width)/2;
}

//---------------------------------------------------------------------------------

int main(int argc, char** argv){
    
    Shape s1("Shape1");     //If shape become an abstract class, make objects is refused
    Dimension2D d1("Dim2D_1");
    Rectangle r1("Rectangle1",3.0,5.0);
    Rectangle r2("Rectangle2",2,3);
    Triangle t1("Triangle1",6,4);

    std::cout<<"---------- Calling method directly -----------------"<<std::endl;
    s1.info();   //Shape method   
    
    std::cout<<"---------- Calling method with pointers -----------------"<<std::endl;
    Shape *p1=&r1;  //Rectangle method
    p1->info();     //Without virtual keyword calls shape method instead of Dimension2D method    

    //Make collections (Only functions with pointers)
    std::cout<<"------------- Collection Info -----------------"<<std::endl;
    Shape *collection_info[]={&s1,&d1,&r1,&r2,&t1};
    for(Shape *p2 : collection_info){
        p2->info();
    }
    
    std::cout<<"------------- Collection Area -----------------"<<std::endl;
    Dimension2D *collection_area[]={&d1,&r1,&r2,&t1};   //&s1 cant be called
    for(Dimension2D *p3 : collection_area){
        p3->info();
        std::cout<<"Area: "<<p3->area()<<std::endl<<std::endl;
    }

    std::cout<<"--------------- Destructors --------------------"<<std::endl;

    return 0;
}
