#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the value of side A: ";
    cin>>a;
    cout<<"Enter the value of side B: ";
    cin>>b;
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    cout<<"The value of SIDE C is : "<<c<<endl;
    return 0;
}