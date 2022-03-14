/*
 What is macro?
 Macro is a piece of code in a program which is given some name.
 whenever the name is used, it is replaced by the contents of the macro

 note: macro is defined by the help of #define

 syntax: #define macro-name content

 type: OBJECT LIKE, FUNCTION like

*/

#include <iostream>
#define num 10
using namespace std;
int main(){
    int i=1;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}