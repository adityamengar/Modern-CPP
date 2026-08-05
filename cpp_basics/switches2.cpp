#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter the Grade you Got: ";
    cin>>grade;

    switch(grade){
        case 'A':
            cout<<"You are a Genius"<<endl;
            break;
        case 'B':
            cout<<"You are a Good Student"<<endl;
            break;
        case 'C':
            cout<<"You are an Average Student"<<endl;
            break;
        case 'D':
            cout<<"You are a Below Average Student"<<endl;
            break;
        case 'F':
            cout<<"You are a Fail Student"<<endl;
            break;
        default:
            cout<<"Invalid Grade"<<endl;
            break;
    }
    return 0;
}