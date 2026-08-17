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
   
    /*if(name.empty()){
    cout<<"You didn't Enter Your Name";
   }
   else{
    cout<<"Hello "<<name;
   }*/
    //name.clear(); //clears the name
    //name.append("@gmail.com");
    
    cout<<"Your Username is now: "<<name<<endl;
    cout<<name.at(1)<<endl;  //in bracket it shows the index number 0,1,2,etc
    //name.insert(0, "@");  //(index , what you want to insert at that specific index)
    cout<<name.find(' ')<<endl;

    name.erase(0,3); //(beginning index , ending index) it will remove from beginning to end index
    return 0;
}