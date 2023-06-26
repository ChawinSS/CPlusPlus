//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>
template<typename T, typename U>

T max(T x, T y){
    return (x>y)? x: y;
}

int main(){
    std:: cout<< max("A","B")<<'\n';
    return 0;
}