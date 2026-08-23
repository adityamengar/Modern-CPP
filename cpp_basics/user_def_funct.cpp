#include<iostream>
using namespace std;

/*void cricket(string name, int num){
    cout<<"Its Your Fav Cricketors Birthday! \n";
    cout<<"His Name is "<<name<<'\n';
    cout<<"There are "<<num<< "Of Fans"<<'\n';
}*/
//if we want to create function but if we want to write it after 
//int main() then you have to declare it first above int main
void cricket(string name, int num); //Like This 

int main(){
    int num;
    string name;
    cout<<"Enter The Name Of Your Fav Cricketor: ";
    cin>>name;
    cout<<"Enter The Number Of FANS He have: ";
    cin>>num;
    cricket(name,num);
    return 0;
}

void cricket(string name, int num){

    cout<<"Its Your Fav Cricketors Birthday! \n";
    cout<<"His Name is "<<name<<'\n';
    cout<<"There are "<<num<< " Of Fans"<<'\n';
}