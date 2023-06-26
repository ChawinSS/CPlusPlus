#include<iostream>
#include<cmath>


int main(){

int monthinput;

std:: cout <<"enter 1-3 :";
std:: cin >> monthinput;
std:: cout << std::endl;

switch(monthinput){
    case 1:
    std:: cout << monthinput << " It is january";
    break;

    case 2:
    std:: cout << monthinput << " It is Febuary";
    break;

    case 3:
    std:: cout << monthinput << " It is March";
    break;
    
    default:
    std:: cout << " Invalid operation";
}

    return 0;
}