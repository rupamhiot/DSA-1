#include <iostream>
#include <vector>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0, end;
    end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    

    int arr[] = {3,8,10,17,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = pivot(arr, n);
    cout << "index " << index;
    return 0;
}