#ifndef CYLINDER_H
#define CYLINDER_H

//Constants
const double PI{3.14159};

//Classes
class Cylinder{
    //Atributes
    private:     //Encapsulation
        double radius{};
        double height{};
    //Methods
    public:
        //Getters
        double get_radius();
        double get_height();
        //Setters
        void set_radius(double);
        void set_height(double);
        //Methods
        double volume();
};

#endif