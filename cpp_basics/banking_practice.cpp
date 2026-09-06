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
        cout<<"Enter Your Choice: \n";
        cout<<"*********************\n";
        cout<<"1. Show Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. EXIT\n";
        cin>>choice;

        cin.clear();
        fflush(stdin);
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
    // Fixed: Added fixed and setprecision to show money properly (e.g., $10.00)
    cout<<"Your Balance is: $"<<fixed<<setprecision(2)<<balance<<endl;
}

double deposit(){
    double amount = 0;
    cout<<"Enter Amount to Deposit: ";
    cin>>amount;
    
    // Fixed: Added safety check so users can't deposit negative money
    if(amount > 0) {
        return amount; // FIXED: Changed from 'return 0;' to 'return amount;'
    } else {
        cout << "Invalid deposit amount!\n";
        return 0;
    }
}

// FIXED: Added the missing withdraw function definition
double withdraw(double balance){
    double amount = 0;
    cout<<"Enter Amount to Withdraw: ";
    cin>>amount;
    
    // Safety check: Can't withdraw negative money or more than you have
    if (amount > balance) {
        cout << "Incomplete Transaction! Insufficient funds.\n";
        return balance;
    } else if (amount < 0) {
        cout << "Invalid withdrawal amount!\n";
        return balance;
    } else {
        balance -= amount;
        return balance;
    }
}
