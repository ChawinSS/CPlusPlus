#include<iostream>
#include<cmath>


int main(){
std:: string name;

std:: cout<< "Enter name";
std:: getline(std::cin, name);

std:: cout<<  name.find(' ');
 
return 0;
}