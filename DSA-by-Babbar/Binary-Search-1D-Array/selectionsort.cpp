#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
        // cout<<arr[i];
    }
}
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int main()
{
    int arr[] = {6, 4, 2, 8, 12, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    // print(arr, n);
    return 0;
}