#include<iostream>
using namespace std;
int main(){
    string name;
    while(name.empty()){
        cout<<"Enter You Name: ";
        getline(cin,name);
    }
    cout<<"HELLO "<<name<<endl;
}