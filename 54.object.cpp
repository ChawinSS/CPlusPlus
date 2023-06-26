#include <iostream>

class Human{
    public: 
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std:: cout<< "I am eating\n";
    }

    void drink(){
        std:: cout<< "I am drinking\n";
    }

    void sleep(){
        std:: cout<< "I am sleeping\n";
    }

};

int main(){
    Human human1;

    human1.name="Chawin";
    human1.occupation="Doctor";
    human1.age=21;

    std:: cout<< human1.name<<"\n";
    std:: cout<< human1.age<<"\n";
    std:: cout<< human1.occupation<<"\n";

    human1.drink();
    
    return 0;
}
