#include<iostream>

void sortf(int array[],int size);

int main(){
    int array[]={2,4,7,1,10,8,5,9,70,3};
    int size= sizeof(array)/sizeof(int);

        for(int i= 0;i<size;i++){
            std:: cout<< array[i]<< " ";
        }
        
        std:: cout<<"\n";

        sortf(array,size);

        for(int i= 0;i<size;i++){
            std:: cout<< array[i]<< " ";
        }

}

void sortf(int  array[],int size){
    
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0 ;j<size-i-1; j++){
            if(array[j]<array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}