#include<iostream>
#include<cmath>


int main(){

char charactorinput;
double input,result;
std:: cout<< "************** Temperature convertor *****************"<< std:: endl;
std:: cout<< "Choose fahrenheit or celsius (f,c) ";
std:: cout<< "What unit would you like to use: ";

std:: cin>> charactorinput;
std:: cout<< "******************************************************"<< std:: endl << std:: endl;

if(charactorinput=='f'||charactorinput=='F'){
    std:: cout<< "Fahrenheit=>celsius"<< std:: endl;
    std:: cout<< "Enter temperature"<< std:: endl;
    std:: cin>> input;
    
    result=(input-32)/1.8;
    std:: cout<< "The temperature in for celsius is "<< result << " C"<< std:: endl;
    
}else if(charactorinput=='c'||charactorinput=='C'){
    std:: cout<< "celsius=>fahrenheit"<< std:: endl;
    std:: cout<< "Enter temperature"<< std:: endl;
    std:: cin>> input;
    
    result=((1.8*input)+32.0);
    std:: cout<< "The temperature in for fahrenheit is "<< result << " F"<< std:: endl;
    
}else{
std:: cout<< "Invalid"<< std:: endl;

}
    return 0;
}