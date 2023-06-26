#include<iostream>
#include<iomanip>
#include<ctime>

int main(){
std:: string car[]={"Corvette","honda","Cammery"};

std::cout << car[0]<<"\n";
std::cout << car[1]<<"\n";
std::cout << car[2]<<"\n";

car[0] = "Randlower";

std::cout << "\n" <<car[0]<<"\n";

car[3] = "mini";
std::cout << "\n" <<car[3]<<"\n";

return 0;}