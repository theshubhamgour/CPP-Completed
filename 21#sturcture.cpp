#include <iostream>
using namespace std;
struct stu
{
    int marks;     // int 4 bytes
    float avg;     // float 4 bytes
    double salary; // double 8 bytes  (4+4+8= 16 )size of structure
};

union stu2
{
    int marks;     // int 4 bytes
    float avg;     // float 4 bytes
    double salary; // double 8 bytes  (max size will get print)
};

int main()
{
    cout << sizeof(stu) << endl;
    cout << sizeof(stu2) << endl;
}