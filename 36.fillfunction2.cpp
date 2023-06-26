#include<iostream>

int main(){
    const int size=99;
std:: string foods[size];

fill(foods,foods + size/3,"pizza");
fill(foods + size/3,foods + size/3*2,"hamburger");
fill(foods + size/3*2,foods + size,"hotdog");

for(int i=0; i<size;i++){
    std:: cout<< foods[i]<< "\n";

}
return 0;}