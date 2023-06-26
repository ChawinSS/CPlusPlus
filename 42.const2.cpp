#include<iostream>
#include<iomanip>
#include<ctime>

void printInfo(const std::string &x, const int &y);

int main(){
std:: string x="Kool-aid";
int age =21;

printInfo(x,age);
   return 0;
}

void printInfo(const std::string &x, const int &age){
// x="sd";
// age=2;
std:: cout<< x << "\n";
std:: cout<< age << "\n";
}