#include<iostream>
using namespace std;
int main(){
    //do while loop = do some block of coode first,
    //                THEN repeat again if condition is TRUE
    int number;
    do
    {
        cout<<"Enter a +ve NUMBER: ";
        cin>>number;
    }while(number<0);
    cout<<"The NUMBER is : "<<number;
    return 0;
}