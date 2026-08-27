#include<iostream>
using namespace std;

string concatString(string firstName,string lastName);
int main(){
    string firstName = "Aditya";
    string lastName = "Mengar";
    string fullName = concatString(firstName,lastName);
    
    cout<<"HELLO "<<fullName;
    return 0;
} 

string concatString(string string1, string string2){
    return string1 + " " + string2;
}

