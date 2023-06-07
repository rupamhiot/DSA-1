#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result=result^arr[i];
       
    }
     return result;

}
int main()
{
    int arr[]={3,7,2,2,7,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    unique(arr,n);
}