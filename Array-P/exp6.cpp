#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4};
    int i;
    int* p=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    for(i=0;i<n;i++)
    {
        cout<<" "<<p[i];
    }
}