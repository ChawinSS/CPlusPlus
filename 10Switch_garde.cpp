#include<iostream>
#include<cmath>


int main(){

char grade;

std:: cout <<"enter A-C :";
std:: cin >> grade;
std:: cout << std::endl;

switch(grade){
    case 'A':
    std:: cout <<  " You did good";
    break;

    case 'B':
    std:: cout << " Ok";
    break;

    case 'C':
    std:: cout <<  " Pass";
    break;
    
    default:
    std:: cout << " Invalid operation";
}

    return 0;
}