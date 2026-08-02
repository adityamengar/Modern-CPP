#include<iostream>
using namespace std;
int main(){
    string name;//Declaring a string variables to store the name
    string name2;
    int age;
    cout<<"Enter your nick name: ";
    cin>>name;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"ENTER FULL NAME: ";
    getline(cin>>ws,name2);//ws is used to ignore the white space before the input

    cout<<"Your full name is : "<<name2<<endl;
    cout<<"Your age is "<<age<<endl;
    cout<<"Nick name: "<<name<<
    return 0;
}