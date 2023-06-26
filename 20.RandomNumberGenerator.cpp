#include<iostream>
#include<ctime>


int main(){
srand(time(NULL));

int dice1 = (rand() %6)+1;
int dice2 = (rand() %6)+1;
int dice3 = (rand() %6)+1;

std::cout<<"Dice1 "<<dice1<<"\n";
std::cout<<"Dice2 "<<dice2<<"\n";
std::cout<<"Dice3 "<<dice3<<"\n";

    return 0;
}