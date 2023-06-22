#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int k)
{
    int start = 0, end;
    end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
            return mid;
        else if (k > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int key = 5;
    int arr[] = {2, 3, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarysearch(arr, size, key);
    cout << "index: " << index;

    return 0;
}