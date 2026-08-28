#include<iostream>
using namespace std;
void printNum(int myNum);
int main(){

    //local variablles = declared inside a function or block {}
    //Global Variable = declared outside of all functions
    int myNum=1;
    printNum(myNum);
    return 0;
}

void printNum(int myNum){
    cout<<myNum;
}