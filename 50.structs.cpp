//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

struct students{
    std :: string name;
    double gpa;
    bool enrolled= true;
};

int main(){
    students student_1;
    student_1.name="spanbob";
    student_1.gpa=3.2;

    students student_2;
    student_2.name="patrix";
    student_2.gpa=2.2;

    students student_3;
    student_3.name="chawin";
    student_3.gpa=1.5;
    student_3.enrolled= false;


std:: cout<<"\n"<< student_1.name<< "\n";
std:: cout<< student_1.gpa<< "\n";
std:: cout<< student_1.enrolled<< "\n";

std:: cout<<"\n"<< student_2.name<< "\n";
std:: cout<< student_2.gpa<< "\n";
std:: cout<< student_2.enrolled<< "\n";

std:: cout<<"\n"<< student_3.name<< "\n";
std:: cout<< student_3.gpa<< "\n";
std:: cout<< student_3.enrolled<< "\n";

    return 0;
}