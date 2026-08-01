#include <iostream>
using namespace std;
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
    //is a labeled container that holds code. It lets you use the same name for different things without causing confusion
int main(){
    int x=0;
    /* here we can see that therer have now become many
    x so if we cout<< x; it will show the x=0 value    
    */
   cout<<x<<endl;
   cout<<first::x<<endl; //(::) this is called scope resolution operator
   //(::) this operator tell the computer exactly which container or folder a piece of code belongs to.
   cout<<second::x<<endl;
   //there is 2ND Option by using namespace std; <- This Line
   /*using namespace first;
   cout<<"This is 1st Namespace x value: "<<x<<endl;*/
   return 0;
}