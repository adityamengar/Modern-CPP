#include<iostream>
#include<ctime>
using namespace std;
char getUserchoice();
char getComputerchoice();
void showChoice(char Choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player=getUserchoice();
    cout<<"Your Choice: ";
    showChoice(player);

    computer = getComputerchoice();
    cout<<"Computer Choice: ";
    showChoice(computer);

    chooseWinner(player,computer);
    return 0;
}

char getUserchoice(){
    char player;
    cout<<"Rock Paper Scissors Game !\n";

    do{

        cout<<"**************************\n";
        cout<<"'r' for Rock\n";
        cout<<"'p' for Paper\n";
        cout<<"'s' for Scissors\n";
        cin>>player;
        }while(player != 'r' && player != 'p' && player != 's');

        return player;
}

char getComputerchoice(){
    srand(time(0));
    int num = rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}

void showChoice(char Choice){
    switch(Choice){
        case 'r': cout<<"Rock\n";
            break;
        case 'p': cout<<"Paper\n";
            break;
        case 's': cout<<"Scissors\n";
            break;
    }

}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if(computer =='r'){
                        cout<<"Its a Tie! \n";
                    }
                    else if(computer=='p'){
                        cout<<"You Lose! \n";
                    }
                    else{
                        cout<<"User Won! \n";
                    }
                    break;

        case 'p':   if(computer =='p'){
                        cout<<"Its a Tie! \n";
                    }
                    else if(computer=='s'){
                        cout<<"You Lose! \n";
                    }
                    else{
                        cout<<"User Won! \n";
                    }
                    break;

        case 's':   if(computer =='s'){
                        cout<<"Its a Tie! \n";
                    }
                    else if(computer=='r'){
                        cout<<"You Lose! \n";
                    }
                    else{
                        cout<<"User Won! \n";
                    }
                    break;
    }
}