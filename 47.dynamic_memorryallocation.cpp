//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

int main(){
int *pNum=nullptr;

pNum= new int;

*pNum=21;

std:: cout<< "Address: " << pNum << "\n";
std:: cout<< "Value: " << *pNum << "\n";

delete pNum;
return 0;
}
