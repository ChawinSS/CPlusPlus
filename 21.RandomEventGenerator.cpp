#include<iostream>
#include<ctime>


int main(){
srand(time(NULL));

int event = (rand() %5)+1;

switch(event){
    case 1:
    std::cout<<" You win sunglasses\n";
    break;
    case 2:
    std::cout<<" You win lumch\n";
    break;
    case 3:
    std::cout<<" You win gift card\n";
    break;
    case 4:
    std::cout<<" You win concert ticket\n";
    break;
    case 5:
    std::cout<<" You win my heart\n";
    break;
}

    return 0;
}