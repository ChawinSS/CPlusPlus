#include<iostream>
#include<vector>

int main(){

std:: string name;
int age;

std:: cout<< "your first and last is?" << std::endl;
std:: getline(std::cin, name); //with white space
//std:: cin>>name; //without white space

std:: cout<< "what is your age?" << std::endl;
std:: cin >> age;

std:: cout<< "your name is "<< name << ". You are "<< age << std::endl;
    return 0;
}