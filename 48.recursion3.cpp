//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

double factorial(double num);

int main(){
    std::cout<< factorial(4);
    return 0;
}

double factorial(double num){

if(num>1){
return num * factorial(num-1);
}
else{
    return 1;}
}