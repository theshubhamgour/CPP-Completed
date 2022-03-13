#include <iostream>
using namespace std;
int main()
{
    int atm;
    cout << "Enter ATM Pin: ";
    cin>>atm;
    if (atm == 4565)
    {
        cout << "User verified";
    }
    else
    {
        cout << "Unauthorized access";
    }
}