//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

int main(){
std:: string name="bro";
std:: string *pName =&name;

std:: cout<< pName<<"\n";
std:: cout<< *pName<<"\n";

int age=21;
int *pAge=&age;

std:: cout<< pAge<<"\n";
std:: cout<< *pAge;

std:: string foods[3]={"hamburger", "pizza", "spagetti"};
std:: string *pFoods =foods;

std:: cout<< pFoods<<"\n";
std:: cout<< *pFoods<<"\n";
return 0;
}
