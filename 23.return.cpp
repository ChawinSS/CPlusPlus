#include<iostream>
#include<ctime>

double square(double length);
double cube(double length);

int main(){

    double length =6.0;
    
    double area=square(length);
    double Volumn=cube(length);
    
    std:: cout<< "The area is : "<< area <<" cm^2\n"; 
    std:: cout<< "The volumn is : "<< Volumn <<" cm^3\n"; 
  
    return 0;
}

double square(double length){
    return length*length;
}

double cube(double length){
    return length*length*length;
}