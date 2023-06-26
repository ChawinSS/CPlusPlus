//https://www.youtube.com/watch?v=-TkoO8Z07hI
#include<iostream>

template<typename T, typename U>

auto max(T x, U y){
    return (x>y)? x: y;
}

int main(){
    std:: cout<< max(1,2.3)<<'\n';
    return 0;
}