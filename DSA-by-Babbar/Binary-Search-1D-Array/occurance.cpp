#include <iostream>
using namespace std;
int lbs(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start +end) / 2;
    while (start <=end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = (start +end) / 2;
    }
    return ans;
}
int rbs(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start +end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid +1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start +end) / 2;
    }
    return ans;
}
int main()
{
    int key = 2;

    int arr[] = {1, 2, 2, 2, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index1 = lbs(arr, n, key);
    cout << "index " << index1<<endl;
    int index2;
    index2=rbs(arr,n,key);
    cout << "index " << index2<<endl;
    int total_occurance=index2-index1+1;
    cout<<total_occurance;

    return 0;
}