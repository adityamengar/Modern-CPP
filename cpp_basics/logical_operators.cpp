#include<iostream>
using namespace std;
int main(){
    // && = check if conditions are true
    // || = check if at least one condition is true
    // ! = reverses the logical state of its operand
    int temp;
    bool sunny=false;
    cout<<"Enter the temperature in Celcius: ";
    cin>>temp;

    //if(temp>0 && temp<30){  (OR)
    if(temp<=0 || temp>=30){
        cout<<"The temperature is bad today! "<<endl;

    }
    else{
        cout<<"The temperature is good today! "<<endl;
    }

    if(!sunny){
        cout<<"It is cloudy outside! "<<endl;
    }
    else{
        cout<<"It is sunny Outside!"<<endl;
    }
return 0;
}
