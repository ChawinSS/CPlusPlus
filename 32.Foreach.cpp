#include<iostream>

int main(){

    std ::string students[]={'sapnbob','sandy','hey'};
    //less flexibilie than for loop
    
    for(std :: string student : students){
        std :: cout << student << '\n';
    }

return 0;
}