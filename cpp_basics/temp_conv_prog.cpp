#include<iostream>
using namespace std;
int main(){
    cout<<"*****Temperature Converter*****"<<endl;

    double temp;
    char unit;
    cout<<"F: Fahrenheit"<<endl;
    cout<<"C: Celsius"<<endl;
    cout<<"Enter Unit You would like to convert to: ";
    cin>>unit;
    if(unit=='F' || unit=='f'){
        cout<<"Enter the temp in Celcius: ";
        cin>>temp;
        temp=(1.8*temp)+32.0;
        cout<<"Temperature is: "<<temp<<"F";
    }
    else if(unit=='C' || unit == 'c'){
        cout<<"Enter the temp in Fahrenheit: ";
        cin>>temp;
        temp=(temp - 32)/1.8;
        cout<<"Temperature is: "<<temp<<"C";
    }
    else{
        cout<<"Please Enter Unit in C or F "<<endl;
    }
    return 0;
}