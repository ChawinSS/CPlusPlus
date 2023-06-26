//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

int main(){
int *pAge=nullptr;
int age=21;
pAge=&age;
//only for test or best practice if address is success assign
if(pAge == nullptr){
    std::cout<<"address error";
}
else{
std:: cout<< pAge<<"\n";
std:: cout<< *pAge;
}

return 0;
}
