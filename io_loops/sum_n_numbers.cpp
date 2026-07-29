#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int sum=0;

    cout<<"Enter a numbers addition limit: "<<endl;
    cin>>n;

    for(int i=0; i<=n; ++i)
        sum=sum+i;
    
    cout<<"Sumof "<<n;
    cout<<" number is: "<<sum<<endl;
    
    return 0; //Signals everything worked fine
}