#include<iostream>

using namespace std;
int main(){
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num =rand()%100+1;
    
    cout<<"*********NUMBER GUESSING GAME**********\n";
    do{
        cout<<"Enter the guess between (1-100)\n";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"TOO HIGH Guess Little Lower\n";
        }
        else if(guess<num){
            cout<<"TOO LOW Guess Little Higher\n";
        }
        else{
            cout<<"CORRECT! No Of Guess: "<<tries<<'\n';
        }
    }while(num!=guess);

    cout<<"******************************************\n";
    return 0;
}