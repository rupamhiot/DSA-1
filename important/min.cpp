#include<iostream>
using namespace std;
void minarray(int arr[],int n)
{
   
    int result=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<result)
        result=arr[i];
    }
    cout<<result<<endl;
}
void odd(int arr[],int n)
{
    int result;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            result+=arr[i];
        }
           

    }
    cout<<result;
}
void even(int arr[],int n)
{
    int result;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            result+=arr[i];
        }
           

    }
    cout<<result;
}
int main()
{
    int arr[]={3,76,8,6,1};
     int n=(sizeof(arr)/sizeof(arr[0]));
    // minarray(arr,n);
    // odd(arr,n);
    // even(arr,n);
    
}