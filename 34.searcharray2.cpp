#include<iostream>

int searchf(std:: string array[],int size, std:: string element);

int main(){
    std:: string foods[]={'burger','spagatte','pizza'};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std:: string foodtarget;

    std:: cout<< "Enter food\n";
    std :: getline(std:: cin, foodtarget);
    
    index= searchf(foods,size, foodtarget);

if(index!=-1){
       std:: cout<< foodtarget<< "number is at index: "<< index+1;
    
}else
    std:: cout<< foodtarget << "not found";
   
    return 0;
}

int searchf(std:: string array[],int size, std:: string element){

for(int i=0; i< size;i++){
    if(array[i]==element){
        return i;
    }
}
return -1;
}