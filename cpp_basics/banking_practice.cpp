#include<iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    do{
        cout<<"*********************\n";
        cout<<"Enter You Choice: \n";
        cout<<"*********************\n";
        cout<<"1. Show Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. EXIT\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                cout<<"Thank You for Banking with us\n";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    cout<<"Your Balance is : "<<balance<<endl;
}

double deposit(){
    return 0;
}
