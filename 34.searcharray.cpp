#include<iostream>
#include<iomanip>
#include<ctime>

int searchf(int array[],int size, int element);

int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    std:: cout<< "Enter num";
    std :: cin >> myNum;
    
    index= searchf(numbers,size, myNum);

if(index!=-1){
       std:: cout<< "number is at index: "<< index+1;
    
}else
    std:: cout<< "not found";
   
    return 0;
}

int searchf(int array[],int size, int element){

for(int i=0; i< size;i++){
    if(array[i]==element){
        return i;
    }
}
return -1;
}