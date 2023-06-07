#include <iostream>

using namespace std;

void array_reverse(int arr[], int n)
{
    int temp[10]={0};
    for(int i=0;i<n/2;i++)
    {
        temp[i]=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp[i];
    }
}

int main()
{
    int size;
    cout << "Enter the size";
    cin >> size;
    int arr[20];
    cout << "Enter ther array element";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n = size;

    array_reverse(arr, n);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
