#include<iostream>
#include<iomanip>
#include<ctime>

int main(){
    std:: string questions[]={"what year was C++ created",
                              "who invent C++",
                              "What is the predecessor of C++",
                              "is the earth flat?"};

    std:: string options[][4]={{"A. 1969","B. 1975","C. 1985","D. 1989"},
    {"A. Guido van Rossum","B. Bjarne Stourusstrup","C. John Carmark","D. Tony Stark"},
    {"A. C","B. C+","C. C--","D. B++"},
    {"A. yes","B. No","C. Sometime","D. what's Earth"}};     

    char answerKey[]={'C','B','A','B'};

    int size= sizeof(questions)/sizeof(questions[0]);
    char guess;
    double score=0;

    for(int i=0;i<size;i++){
        std:: cout<<"**************************\n";
        std:: cout<< questions[i]<<"\n";
        std:: cout<<"**************************\n\n";
         
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
        std:: cout<< options[i][j]<< "\n";
        }
        
        std:: cin >> guess;
        guess= toupper(guess);

        if(guess== answerKey[i]){
        std::cout<< "CORRECT\n";
        score++;
        }
        else{
        std::cout<< "Wrong\n"; 
        std::cout<< "Answer: "<<answerKey[i]<< "\n";
        }
    }

    std::cout<< "\n\n***********************************\n";
    std::cout<< "Result\n";
    std::cout<< "Correct: "<<score<< " out of "<< size <<"\n";
    std::cout<< "SCORE (%): "<< (score/size)*100 <<"%\n";
    
    return 0;}