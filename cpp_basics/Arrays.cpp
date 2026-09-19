#include<iostream>
using namespace std;
int main(){
    //array= It is a data structure that can hold multiple values
    //       values are accessed by an index number
    //       "Kind of like a variable that holds multiple values" 
    
    //for arry for below example we can also assign the space like car[100] to store
    //and later on add elements in it
    
    string car[] = {"TATA","MUSTANG","MAHINDRA"};
    //Arrays Must always be of same data type
    // LIKE here if you see in bracket{"Tata",1}, if we add number it will gve compiler error

    car[1]="BMW";//change at position 1


    cout<<car[0]<<"\n";
    cout<<car[1]<<"\n";
    cout<<car[2]<<"\n";

    //example:
    double price[4];
    price[0]=230.44;
    price[1]=77.69;
    price[2]=99.90;
    price[3]=7.77;

    cout<<price[0]<<endl;
    cout<<price[1]<<endl;
    cout<<price[2]<<endl;
    cout<<price[3]<<endl;

    return 0;
}