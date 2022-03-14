#include <iostream>
using namespace std;
struct stu
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct stu s;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "Your roll number is: " << s.roll<<endl << "Name is: " << s.name<<endl << "MArks is: " << s.marks << endl;
}