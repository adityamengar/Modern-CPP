#include <iostream>
using namespace std;
int main(){
    //Ternary Operataor ?: = replacement for if-else statement
    //condition ? expression1 : expression2;
    //int grade = 75;
    //grade>=60 ? cout<<"You PASS! " : cout<<"You FAIL! ";
    
    //int number = 9;
    //number%2 == 1 ? cout<<"ODD" : cout<<"EVEN";
    //number%2 ? cout<<"ODD" : cout<<"EVEN";
    
    bool hungry = true;
    //hungry ?cout<<"You are hungry! " : cout<<"You are FULL! ";
    cout<<(hungry ? "You are hungry! " : "You are FULL! ");
    return 0;
}