#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {

    //constructor =  special method that is automatically called when an object is instantiated
	//                      useful for assigning values to attributes as arguments

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}