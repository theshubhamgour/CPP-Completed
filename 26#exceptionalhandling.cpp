/*
 What is exceptional handling?
 an exceptional is a unexpected/ unwanted/ abormal situation that occured at runtime
 called exception

 SYNTAX:
    try{
        throw exception
    }
    catch(type arg){
        //solved problem
    }
*/

#include <iostream>
using namespace std;
int main()
{

    cout << "Execution Starting.." << endl;
    int a, b, c;
    cout << "ENter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b==0)
        {
            throw b;
        }
        
        c = a / b;
        cout << "Result: " << c;
    }
    catch (int x)
    {
        cout<<"Cannot divide by: "<<x<<endl;
    }

    cout << "Execution ended..";
}