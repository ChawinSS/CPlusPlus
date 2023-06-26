#include<iostream>
#include<vector>

int main(){

int student=20;

student =student +1;
std:: cout << student << std::endl;
student +=1;
std:: cout << student << std::endl;
student ++;

std:: cout << student << std::endl;


student =student -1;
std:: cout << student << std::endl;
student -=1;
std:: cout << student << std::endl;
student --;

std:: cout << student << std::endl;

student =student *2;

std:: cout << student << std::endl;

student =student /2;

std:: cout << student << std::endl;

double studentdouble=20;

studentdouble =studentdouble /3;

std:: cout << studentdouble << std::endl;

int remainder= student%3;

std:: cout << remainder << std::endl;

int student2= 6-(5+4)*3/2;

std:: cout << student2 << std::endl;

    return 0;
}