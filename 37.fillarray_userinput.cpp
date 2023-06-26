#include<iostream>
#include<iomanip>
#include<ctime>

int main(){
    std:: string food[5];
    int size= sizeof(food)/sizeof(food[0]);
    std::string temp;

   for(int i=0;i<size;i++){
    std::cout<< "enter foods you like or 'q'#"<<i+1<<": ";
    std:: getline(std::cin, temp);
    if(temp=="q"){
        break;
        }
        else{
            food[i]=temp;
        }
   }
       std::cout<< "\n\nYou like the food: \n";
      for(int i=0;!food[i].empty();i++){
        std::cout<< "# "<<i+1<<": "<<food[i]<<"\n";
      }
   return 0;
}