#include<iostream>
using namespace std;
int main(){
    //array= It is a data structure that can hold multiple values
    //       values are accessed by an index number
    //       "Kind of like a variable that holds multiple values" 
    string car[] = {"TATA","MUSTANG","MAHINDRA"};
    //Arrays Must always be of same data type
    // LIKE here if you see in bracket{"Tata",1}, if we add number it will gve compiler error
    
    car[1]="BMW";
    cout<<car[0]<<"\n";
    cout<<car[1]<<"\n";
    cout<<car[2]<<"\n";

    return 0;
}