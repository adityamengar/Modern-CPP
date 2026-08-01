#include<iostream>
using namespace std;
int main(){
    const double PI = 3.14159; // The Const keyword is used to make the thing constant such that no one can change that variable value anywhere in the code
    // IN const the variables we assign the value we must write that variables in Capial Letters
    double radius = 10;
    double circumference = 2 * PI * radius; // Circumference of a circle formula
    //eg
    const double WIDTH = 1920;
    const double LIGHT_SPEED = 299792458;
    // here all the variables are made constant such that if uses recall them anywhere in the code it will show the error
    cout<<circumference<< "cm";
    
}