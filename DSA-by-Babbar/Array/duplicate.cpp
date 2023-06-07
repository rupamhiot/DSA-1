#include <iostream>
using namespace std;
void unique(int arr[], int nums)
{
    int result[] = {0};
    for (int i = 0; i < nums; i++)
    {
        result[i] = result[i] ^ arr[i];
    }
    for (int i = 1; i < nums; i++)
    {
        result[i] = result[i] ^ arr[i];
    }
    cout << result[0];
    cout << result[1];
}
int main()
{
    int arr[] = {3, 7, 2, 2, 9, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    unique(arr, n);
}