#include<iostream>
using namespace std;
char getUserchoice();
char getComputerchoice();
void showChoice(char Choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;


}

char getUserchoice(){
    char player;
    cout<<"Rock Paper Scissors Game !\n";
    cout<<"**************************\n";
    cout<<"'r' for Rock\n";
    cout<<"'p' for Paper\n";
    cout<<"'s' for Scissors\n";
    cin>>player;
    return player;
}

char getComputerchoice(){
    return 0;
}