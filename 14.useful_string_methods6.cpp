#include<iostream>
#include<cmath>


int main(){
std:: string name;

std:: cout<< "Enter name";
std:: getline(std::cin, name);

name.insert(0,"@");

      std:: cout<< name;
 
    return 0;
}