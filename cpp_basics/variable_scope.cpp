#include<iostream>
using namespace std;

int myNum=3; //this is global variable declared outside 
void printNum();
int main(){

    //local variablles = declared inside a function or block {}
    //Global Variable = declared outside of all functions

    int myNum=1; //this is also local variable
    printNum();
    //cout<<myNum<<endl;
    cout<<::myNum<<endl; //(::)This is scope resolution operator used to let the global variable use in it
    return 0;
}

void printNum(){
    int myNum = 2; //this is local variable
    cout<<myNum<<endl;
}

//the global variable i used in this program for example is less secure than
//using the local variable 
// so the local variable is more recommended as it is secure to use