#include<iostream>
using namespace std;
void missing(int a[],int n)
{
    int i;
    int N=n;
    int temp[N+1];
    for(i=0;i<N+1;i++)
    {
        temp[i]=0;
    }
    for(i=0;i<N;i++)
    {
        temp[a[i]-1]=1;
    }
    int ans=0;
    for(i=0;i<N+1;i++)
    {
        if (temp[i]==0)
        {
            ans=i+1;
        }
        
    }
    cout<<ans;
}
int main()
{
    int arr[]={1,2,5,4,3,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    missing(arr,n);
}