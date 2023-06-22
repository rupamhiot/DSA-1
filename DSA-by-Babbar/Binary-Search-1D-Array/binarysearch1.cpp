#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}
int main()
{
    // int key = 7;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index=binary_search(arr, n, 7);
    cout<<"index "<<index;
          
 return 0;
}