#include <iostream>
#include <vector>
using namespace std;
int bs(int arr[], int n, int key)
{
    int start = 0, end;
    end = n - 1;
    // int mid = (start + end) / 2;
    int mid=start+(end-start)/2;
    while (start < end)
    {
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

       int mid=start+(end-start)/2;
    }

    return -1;
}
int main()
{
    int key = 5;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index=bs(arr, n, key);
    cout<<"index "<<index;
    return 0;
}