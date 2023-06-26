#include<iostream>
#include<cmath>


int main(){

double age;


std:: cout <<"enter age :";
std:: cin >> age;
std:: cout << std::endl;

if(age>=100){
    std::cout<<"ops too old";
}
else if(age>=18){
    std::cout<<"your welcome";
}
else if(age<0){
    std::cout<<"baby";
}
else{
        std::cout<<"You are not old enough";
}
    return 0;
}