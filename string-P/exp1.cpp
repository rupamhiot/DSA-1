#include<iostream>
using namespace std;
int length(char arr[])
{
    int i;
    while(arr[i]!=0)
    {
        i++;
    }
    return i;
}
int main()
{
    char arr[]="Rupam";
   int l= length(arr);
    cout<<l;
}