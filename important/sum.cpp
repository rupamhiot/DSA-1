#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    int result;
    for(int i=0;i<n;i++)
    {
        result+=a[i];
    }
    return result;
}
float avg(int a[],int n)
{
    float result=sum(a,n);
    return result/n;
}
int main()
{
    int arr[]={2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<sum(arr,n);
    cout<<avg(arr,n);


}