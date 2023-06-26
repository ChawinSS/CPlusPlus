#include<iostream>
#include<cmath>


int main(){
std:: string name;

std:: cout<< "Enter name";
std:: getline(std::cin, name);

if(name.length()>12){
    std:: cout<< "Your name cant be over 12";
}
else {
      std:: cout<< "Welcome"<< name;

}
 
    return 0;
}