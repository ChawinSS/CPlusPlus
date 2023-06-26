#include<iostream>
#include<cmath>


int main(){
    int row;
    int column;
    char symbol;

std::cout<<"how many row?\n";
std:: cin>> row;

std::cout<<"how many column?\n";
std:: cin>> column;

std::cout<<"what symbol?\n";
std:: cin>> symbol;

std::cout<<"\n";

    for(int j=1;j<=row;j++){
        for(int i=1;i<=column;i++){
        std::cout<< symbol<<" ";
        }
    std::cout<<"\n";
    }
    return 0;
}