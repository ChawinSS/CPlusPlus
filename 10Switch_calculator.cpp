#include<iostream>
#include<cmath>


int main(){

char Operationinput;
double a;
double b;
double result;

std:: cout << std::endl;

std:: cout <<"*************** calculator *****************";
std:: cout << std::endl;
std:: cout <<"enter +-*/ :";
std:: cin >> Operationinput;
std:: cout << std::endl;

std:: cout <<"enter 1 number :";
std:: cin >> a;
std:: cout << std::endl;

std:: cout <<"enter 2 number :";
std:: cin >> b;
std:: cout << std::endl;

std:: cout <<"********************************************";
std:: cout << std::endl;

switch(Operationinput){
    case '+':
    result =b+a;
    std:: cout <<  "The answer is ";
    std:: cout <<  result;
    std:: cout << std::endl;
    break;

    case '-':
    result =b-a;
    std:: cout << "The answer is ";
    std:: cout << result;
    std:: cout << std::endl;
    break;

    case '*':
    result =b*a;
    std:: cout <<  "The answer is ";
    std:: cout <<  result;
    std:: cout << std::endl;
    break;
    
    case '/':
    result = b/a;
    std:: cout <<  "The answer is ";
    std:: cout <<  result;
    std:: cout << std::endl;
    break;

    default:
    std:: cout << "Invalid operation ";
    std:: cout << std::endl;
}

    return 0;
}