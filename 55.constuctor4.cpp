#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string x,int y,double z){
            name=x;
            age=y;
            gpa=z;
    }
};

int main() {
        Student student1("rick",25,3.2);
        Student student2("partic",40,3.2);


    std::cout << student2.name << '\n';
    std::cout << student2.age<< '\n';
    std::cout << student2.gpa << '\n';

    
    return 0;
}