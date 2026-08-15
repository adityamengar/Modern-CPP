#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your Name: ";
    getline(cin, name);
    /*if(name.length()>12){
        cout<<"our Name Cannnot be over 12 characters";
    }
    else{
        cout<<"Welcome "<<name;
    }*/
   
    if(name.empty()){
    cout<<"You didn't Enter Your Name";

   }
   else{
    cout<<"Hello "<<name;
   }
    return 0;
}