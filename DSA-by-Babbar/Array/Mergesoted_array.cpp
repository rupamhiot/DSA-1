#include <iostream>
#include <vector>
using namespace std;
void Merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 7, 8, 9};
    int arr2[] = {2, 4, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1+n2];

    Merge(arr1, n1, arr2, n2, arr3);
    int n = sizeof(arr3) / sizeof(arr3[0]);
    print(arr3, n);
    return 0;
}