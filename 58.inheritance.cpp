//https://www.youtube.com/watch?v=5_GQw06deQg&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=59

#include <iostream>

class Animal{
public:
bool alive = true;
void eat(){
    std:: cout<< "eating\n";
}
};

class Dog: public Animal{
    public:

    void bark(){
            std:: cout<< "barking\n";
}

};

class Cat: public Animal{
    public:

    void meow(){
            std:: cout<< "Meoww\n";
}

};

int main() {

Dog dog;
Cat cat;

std::cout << dog.alive<<"\n";
dog.eat();
dog.bark();
cat.meow();
std::cout << cat.alive<<"\n";
// cat.bark();
    return 0;
}