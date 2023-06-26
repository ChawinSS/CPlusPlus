#include<iostream>
#include<iomanip>
#include<ctime>

char getUserChoice();
char getCoputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player= getUserChoice();

    std:: cout << "user choice is ";

    showChoice(player);

    computer= getCoputerChoice();
    
    std:: cout << "Computer choice ";

    showChoice(computer);

    chooseWinner(player,computer);

    return 0;

}

char getUserChoice(){
char player;
do{
std:: cout<< "Rock-paper-scissor Game!\n";
std:: cout<< "________________________\n";
std:: cout<< "r for Rock\n";
std:: cout<< "p for Papaer\n";
std:: cout<< "s for scissor\n";

std:: cin>> player;
}while (player !='r' && player !='p' && player !='s');

    return player;
}

char getCoputerChoice(){
srand(time(0));
int num= rand()%3+1;
switch(num){
    case 1: return 'r';
    case 2: return 's';
    case 3: return 'p';
}
    return 0;
}

void showChoice(char choice){

    switch(choice){

        case 'r':std:: cout << "Rock\n";
        break;

        case 'p':std:: cout << "Paper\n";
        break;

        case 's':std:: cout << "scissor\n";
        break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer=='r'){std:: cout << "It is a tie!\n";}
                    else if(computer=='p'){std:: cout << "You lose!\n";}
                    else { std:: cout << "You win!\n";}
        break;

        case 'p': if(computer=='r'){std:: cout << "Computer win!\n";}
                    else if(computer=='p'){std:: cout << "Its a tie!\n";}
                    else { std:: cout << "You lose!\n";}
        break;

        case 's': if(computer=='r'){std:: cout << "You lose!\n";}
                    else if(computer=='p'){std:: cout << "You win!\n";}
                    else { std:: cout << "Its a tie!\n";}
        break;
    }
}
