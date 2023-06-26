#include <iostream>

class Human{
    public: 
    std::string name="A";
    std::string occupation="B";
    int age = 1111;

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
    Human human2;
    Human human3;

    human1.name="Chawin";
    human1.occupation="Doctor";
    human1.age=21;

    human2.name="moty";
    human2.occupation="student";
    human2.age=15;

    std:: cout<< human2.name<<"\n";
    std:: cout<< human2.age<<"\n";
    std:: cout<< human2.occupation<<"\n";

    human2.eat();
    
    std:: cout<< human3.name<<"\n";
    std:: cout<< human3.age<<"\n";
    std:: cout<< human3.occupation<<"\n";

    human3.sleep();

    return 0;
}
