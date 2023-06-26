#include<iostream>
#include<iomanip>

void showeBalance(double balance);
double deposit();
double withdraw( double balance);

int main(){
    double balance=0.00;
    int useroperation=0;

    do{
    std:: cout<< "\nEnter your choice: \n";
    std:: cout<< "1) show Balance \n";
    std:: cout<< "2) Deposit \n";
    std:: cout<< "3) Widdraw \n";
    std:: cout<< "4) Exist \n";
    
    std:: cin >> useroperation;

    switch(useroperation){
        case 1: showeBalance(balance);
        break;
        
        case 2: balance+= deposit();
        showeBalance(balance);
        break;
        
        case 3: balance-= withdraw(balance);
        showeBalance(balance);
        break;
        
        case 4:    std:: cout<< "thank for visiting \n";
    
        break;

        default:    std:: cout<< " error \n";
    }

    }while(useroperation!=4);


  return 0;
}

void showeBalance(double balance){
    std:: cout<< "Your balanc is: $" << std::setprecision(2) << std:: fixed << balance<< "\n";

}
double deposit(){
    double amount=0;
    std:: cout << "enter amount to deposit\n";
    std:: cin >> amount;
    
    if(amount>0){

        return amount;
    }
    else{
        std:: cout<< "invlaid\n";
        return 0;
    }
}

double withdraw( double balance){
    double amount=0;
    std:: cout << "enter amount to widdraw\n";
    std:: cin >> amount;
    
    if(amount>balance){
        std:: cout << "insufficient fun\n";
   
        return 0;
    }
  return amount;
}
