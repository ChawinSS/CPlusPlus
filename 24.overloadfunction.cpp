#include<iostream>

void bakePizza();
void bakePizza(std:: string topping1);
void bakePizza(std:: string topping1,std:: string topping2);

int main(){

bakePizza("pepperoni","seafood");

   return 0;
}

void bakePizza(){
std:: cout<< "\nHere is your pizza!\n";
}

void bakePizza(std:: string topping1){
std:: cout<< "\nHere is your "<< topping1<< "pizza!\n";
}
void bakePizza(std:: string topping1,std:: string topping2){
std:: cout<< "\nHere is your "<< topping1<< "&" << topping2<< " pizza!\n";
}
