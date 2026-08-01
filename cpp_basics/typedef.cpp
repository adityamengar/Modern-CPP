#include <iostream>
#include<vector>
using namespace std;
//typedef vector<pair<string, int>> pairlist_t;
//Typedef is used to create a nickname or a shortcut name for an existing data type
typedef string text_t;
typedef int num_t;
int main(){
    //pairlist_t mylist;
    text_t firstName = "BRO";
    cout << firstName << endl;

    num_t age = 25;
    cout << age << endl;
}
// we an also do this without typedef by using the 'using' keyword
//using text_t = string;