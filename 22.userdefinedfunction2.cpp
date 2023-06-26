#include<iostream>
#include<ctime>

void happy(std:: string name, int age);

int main(){
    std:: string name= "Chawin";
    int age=21;
happy(name,age);
std::cout<<"\n";
happy(name,age);
    return 0;
}

void happy(std:: string name, int age){
        std::cout<<" happy birthday to "<< name<< "\n";
        std::cout<<" happy birthday to "<< name << "\n";
                std::cout<<" You are "<< age << "\n";
}