#include<iostream>
#include<cmath>


int main(){

double a;
double b;
double c;

std:: cout <<"enter side a :";
std:: cin >> a;
std:: cout << std::endl;

std:: cout <<"enter side b :";
std:: cin >> b;
std:: cout << std::endl;

a=pow(a,2);
b=pow(b,2);
c=sqrt(a+b);

std:: cout <<"Side c :"<<c;
std:: cout << std::endl;

    return 0;
}