#include<iostream>
#include<iomanip>
#include<ctime>

int main(){

double gpa= 2.5;
std ::string name;
char grade='f';
bool student= 'true';
char grades[]={'a','b','c','d'};
std ::string students[]={"Patric","Sandy","spanbob","asus"};

std::cout<< sizeof(gpa)<< " bytes \n";
std::cout<< sizeof(name)<< " bytes \n";
std::cout<< sizeof(grade)<< " bytes \n";
std::cout<< sizeof(student)<< " bytes \n";
std::cout<< sizeof(grades)<< " bytes \n";

std::cout<< "\n" <<sizeof(grades)/sizeof(char)<< " elements \n";
std::cout<< "\n" <<sizeof(students)/sizeof(std:: string)<< " elements \n";

return 0;
}