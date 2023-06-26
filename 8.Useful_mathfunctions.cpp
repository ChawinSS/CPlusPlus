#include<iostream>
#include<cmath>


int main(){

double x=3;
double y=6;
double z;
double yy=6.33;
z= std::max(x,y);
z= std::min(x,y);
z=pow(2,4);
z=sqrt(9);
z=round(yy);
z=ceil(yy);
z=floor(yy);

std:: cout <<z;

    return 0;
}