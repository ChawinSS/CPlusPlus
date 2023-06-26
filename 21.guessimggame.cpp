#include<iostream>
#include<ctime>


int main(){
srand(time(NULL));

int num = (rand() %100)+1;
int guess;
int tries=0;

do{
std:: cout<<"please guess the number: ";
std:: cin>> guess;  
tries++;

if(guess>num){
    std:: cout<<"too height\n";
}
else if(guess<num){
    std:: cout<<"too low\n";
}
else{
std:: cout<<"Well done\n";
}

if(tries==3){
    std::cout<<"amout of try"<< tries<<"\n";
    break;
}
}while(guess!=num);
}