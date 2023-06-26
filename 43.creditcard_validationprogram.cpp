//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>
#include<iomanip>
#include<ctime>

int getdigit(const int number);
int sumodddigit(const std::string cardNumber);
int sumevendigit(const std::string cardNumber);


int main(){
std:: string cardNumber;
int result =0; 

std:: cout<< "Enter a crad number #: ";
std:: cin>> cardNumber;

result= sumevendigit(cardNumber)+sumodddigit(cardNumber);

if(result%10==0){
std:: cout<< "cardnumber is valid";

}else {
   std:: cout<< "cardnumber is unvalid";
}
return 0;
}

int getdigit(const int number){
   return number%10+(number/10%10);
}

int sumevendigit(const std::string cardNumber){
   int sum =0;
   for(int i= cardNumber.size()-2;i>=0;i-=2){
      sum +=getdigit((cardNumber[i]-'0')*2);
   }
   return sum;
}

int sumodddigit(const std::string cardNumber){
   int sum =0;
   for(int i= cardNumber.size()-1;i>=0;i-=2){
      sum +=cardNumber[i]-'0';
   }
   return sum;
}
