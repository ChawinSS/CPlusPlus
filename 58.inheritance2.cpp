//https://www.youtube.com/watch?v=5_GQw06deQg&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=59

#include <iostream>

class Shape{
    public:
        double area;
        double volumn;
};

class Cube: public Shape{
    public:
    double side;

Cube(double side){
this ->side=side;
this ->area=side*side*6;
this ->volumn=side*side*side;
}
};

class Sphere: public Shape{
        public:
        double radius;
    Sphere(double radius){
    this ->radius=radius;
    this ->area=4*3.14159*(radius*radius);
    this ->volumn=(4/3)*3.14159*(radius*radius*radius);

}
};


int main() {
Cube cube(10);
Sphere sphere(5);

std:: cout<< cube.area<<"cm\n";
std:: cout<< cube.volumn<<"cm\n";

std:: cout<< sphere.area<<"cm\n";
std:: cout<< sphere.volumn<<"cm\n";


    return 0;
}