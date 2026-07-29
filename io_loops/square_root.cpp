#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x;  // allocats 8 bytes of memory
    cout<<"Input Number: "<<endl;
    cin>>x;

    double sqrt_x=sqrt(x); //It instructs the compiler to create a variable named sqrt_x
    cout<<"Sq. Root of "<<x;
    cout<<" is: "<<sqrt_x<<endl;
}