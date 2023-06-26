#include<iostream>
int main(){
int x;
int y=6; //delarlation
x=5;
int sum=x+y;

std::cout <<x<< std::endl;

x=10;

std::cout<< x << std::endl;
std::cout<< y << std::endl;
std::cout<< sum << std::endl;

int age =21;
int year=2033;
double days =7.5;
double price= 10.99, gpa=2.5, temperature=25.1;

std::cout<< price << std::endl;

char grade = 'a';
char initial = 'B', dollarSign='$';

std::cout<< initial << std::endl;
std::cout<< dollarSign << std::endl;

bool student=true;
bool power=true;
bool forSale=true;

std::string name = "chawin";
std::string date = "Friday";
std::string food = "pizza";
std::cout<< name << std::endl;
std::cout<< date << std::endl;
std::cout<< food << std::endl;

std::cout<< "Hello " << name << ". I am " << age << " years old"<< std::endl;

    return 0;
}