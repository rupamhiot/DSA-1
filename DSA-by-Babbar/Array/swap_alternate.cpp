#include <iostream>

using namespace std;

void array_reverse(int arr[], int n)
{
    int temp[10] = {0};
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            temp[i] = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp[i];
        }
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
    print(arr, n);

    return 0;
}
