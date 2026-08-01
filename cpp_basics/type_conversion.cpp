#include <iostream>
using namespace std;
int main(){
    //type conversion is the process of converting one data type into another data type
    //implicit = automatic
    //explicit = Precede value with new data type (int)
    double x= (int)12.88; //here precede value with int data type

    char y = (int)100; //here precede value with int data type
    
    cout<<x<<endl;
    cout<<y<<endl;

    int correct = 8;
    int questions = 10;
    double score = (double)correct/questions*100; //here precede value with double data type
    cout<<score<<endl;
    return 0;
}