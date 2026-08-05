#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    if(age>=18){
        cout<<"You are welcome to site"<<endl;
    }
    else if(age<0){
        cout<<"You are not born yet"<<endl;
    }
    else if(age<=100) {
        cout<<"You are too old to enter the site"<<endl;
    }
    else if(age<=18){
        cout<<"You are too young to enter the site"<<endl;
    }
    return 0;

}

//if statements = do something if a condition is true ; if not,then dont do it