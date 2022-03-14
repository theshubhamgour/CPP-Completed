#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[56] = "BArry";
    cout << str << endl;

    // int r = strlen(str);
    // cout << r;
    strrev(str);
    cout << str;
}