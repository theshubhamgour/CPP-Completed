#include<iostream>
using namespace std;
int main(){
    int arr[2][2],i,j;
    cout<<"Enter elements: ";

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}