#include <iostream>
using namespace std;
int z = 45; // global variable

int main()
{
    int b = 20; // local variable
    static int f = 45;
    cout << z << " " << b << " " << f;
}