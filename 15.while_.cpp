#include<iostream>
#include<cmath>


int main(){
std:: string name;

while(name.empty()){
  std:: cout<< "enter sm";
  std:: getline(std::cin,name);
}
  std:: cout<< "welcome "<< name;

    return 0;
}