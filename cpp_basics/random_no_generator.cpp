#include<iostream>
using namespace std;
int main(){
    srand(time(NULL));
    int num = (rand() % 6)+1;
    //int num1 = (rand()%100)+1;
    //int num2 = (rand()%5)+1;
    cout<<num<<'\n';
    //cout<<num1<<'\n';
    //cout<<num2<<'\n';

    return 0;
}