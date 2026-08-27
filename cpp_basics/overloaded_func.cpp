#include<iostream>
using namespace std;

void bakePizza();
void bakePizza(string cheese, string cheese2);
int main(){
    bakePizza();
    bakePizza("Mayonese","CHEESESTYLED");
    return 0;
}

void bakePizza(){
    cout<<"THIS IS YOUR PIZZA! "<<endl;
}

void bakePizza(string cheese, string cheese2){
    cout<<"This Is Your "<<cheese<< " and "<<cheese2<<" PIZZA !"<<endl;
}