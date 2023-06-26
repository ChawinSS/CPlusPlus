//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

double factorial(double num);

int main(){
    std::cout<< factorial(4);
    return 0;
}

double factorial(double num){
double result=1;

for(int i=1;i<=num;i++){
    result*=i;
}
return result;
}