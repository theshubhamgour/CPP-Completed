/*
What is file handling?
file handling is a mechanism so that we can store the output of the program
in the file and we can perform many operations on the data present, in a file

operations: create,write(ofstream), read(ifstream)
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // for creating a file

    // ofstream newfile("C:\\Users\\Shubham\\Desktop\\CPP.txt");
    // cout << "File created!";
    // newfile << "CPP Full tutorial"; // for printing content in the file
    string str;
    ifstream newfile("C:\\Users\\Shubham\\Desktop\\CPP.txt"); // for reading file
    while (getline (newfile, str)) //this is running
    {
        cout << str;
    }

    newfile.close(); // must close (imp)
}