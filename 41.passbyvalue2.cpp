#include<iostream>
#include<iomanip>
#include<ctime>

void sawp1(std::string x, std::string y);

int main(){
std:: string x="Kool-aid";
std:: string y="Water";

std:: cout<< "\n";
std:: cout<< x<< "\n";
std:: cout<< y<< "\n\n";

sawp1(x,y);

std:: cout<< x<< "\n";
std:: cout<< y<< "\n";

   return 0;
}

void sawp1(std::string x, std::string y){
   std:: string temp;
   temp=x;
    x=y;
    y=temp;
}
