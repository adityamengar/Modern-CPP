//RANDOM EVENT GENERATOR
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int randNum=rand()%5+1;

    switch(randNum){
        case 1: cout<<"YOU WIN BUMPER STICKER: \n";
                break;
        case 2: cout<<"You WIN T-SHIRT: \n";
                break;
        case 3: cout<<"You win a free lunch! ";
                break;
        case 4: cout<<"YOU WIN GIFT CARD ";
                break;
        case 5: cout<<"You Win M.S.Dhoni Bat";
                break;
    }
}