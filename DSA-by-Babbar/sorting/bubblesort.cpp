#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    bool swaped=false;
    for(int i=0;i<n-1;i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swaped=true;
        }
        if(swaped==false)
        break;
        
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {10, 1, 7, 6, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,n);
    print(arr,n);
    return 0;
}