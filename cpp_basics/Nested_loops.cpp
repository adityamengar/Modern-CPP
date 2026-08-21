#include<iostream>
using namespace std;
int main(){
    int row;
    int column;
    char symbol;

    cout<<"Enter The No. of rows: ";
    cin>>row;

    cout<<"Enter the no. of columns";
    cin>>column;

    cout<<"Enter the symbol: ";
    cin>>symbol;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<symbol;
        }
        cout<<'\n';
    }
}