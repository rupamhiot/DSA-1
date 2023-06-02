#include<iostream>
using namespace std;
int main()
{
    string a="RupamJana";
    // char arr[]="Rupam";
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n= a.length();
    // cout<<arr[4];
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
}