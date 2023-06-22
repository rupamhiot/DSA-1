#include <iostream>
#include <vector>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0, end;
    end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int binary_search(int arr[], int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int find_postion(int arr[], int n, int k)
{
    int pivotelement = pivot(arr, n);
    // cout<<pivotelement;
    if (k >=arr[pivotelement]&&k<=arr[n-1])
    {
        return binary_search(arr, pivotelement, n - 1, k);
    }
    else
    {
        return binary_search(arr, 0, pivotelement - 1, k);
    }
}
int main()
{

    int k = 17;
    int arr[] = {3, 8, 10, 17, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find_postion(arr, n, k);

    return 0;
}