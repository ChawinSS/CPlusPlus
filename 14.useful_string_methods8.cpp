#include<iostream>
#include<cmath>


int main(){
std:: string name;

std:: cout<< "Enter name";
std:: getline(std::cin, name);

name.erase(0,3);

      std:: cout<< name;
 
    return 0;
}