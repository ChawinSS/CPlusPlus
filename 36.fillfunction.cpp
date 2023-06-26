#include<iostream>

int main(){
    const int size=100;
std:: string foods[size];

fill(foods,foods + size/2,"pizza");
fill(foods + size/2,foods + size,"hamburger");

for(int i=0; i<size;i++){
    std:: cout<< foods[i]<< "\n";

}
return 0;}