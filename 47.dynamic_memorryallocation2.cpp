//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

int main(){
char *pGrade=nullptr;
int size;

std:: cout<< "What size: ";
std ::cin>> size;

pGrade= new char[size];

for(int i=0;i<size;i++){
    std:: cout<< "What grade #: "<< i+1 << ": ";
    std ::cin>> pGrade[i];
}

for(int i=0;i<size;i++){
    std:: cout<< pGrade[i] << "\n";
}

delete pGrade;
return 0;
}
