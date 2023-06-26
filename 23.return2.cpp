#include<iostream>
#include<ctime>

std:: string concate(std:: string st1, std:: string st2);

int main(){

std:: string st1="chawin";
std:: string st2="chawin";
std:: string fullname=concate(st1,st2);
   
    std:: cout<< "The fullname is : "<< fullname <<" \n"; 
    return 0;
}

std:: string concate(std:: string st1, std:: string st2){
    return st1 + " " + st2;
}