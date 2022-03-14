#include <iostream>
using namespace std;

int fun()   //definition
{
    int a = 10;
    static int b = 10;
    cout << a << endl << b << endl;
}
int main()
{
    fun(); //calling
    return 0;
}