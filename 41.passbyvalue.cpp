#include<iostream>
#include<iomanip>
#include<ctime>

int main(){
std:: string x="Kool-aid";
std:: string y="Water";
std:: string temp;

std:: cout<< "\n";
std:: cout<< x<< "\n";
std:: cout<< y<< "\n\n";

temp=x;
x=y;
y=temp;

std:: cout<< x<< "\n";
std:: cout<< y<< "\n";

   return 0;
}
