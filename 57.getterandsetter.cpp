//https://www.youtube.com/watch?v=5_GQw06deQg&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=59

#include <iostream>

class Stove{
    private:
        int temperature;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main() {

    Stove stove;

    stove.setTemperature(100000);
    std::cout << "The temperature setting is: " << stove.getTemperature()<<"\n";

    return 0;
}