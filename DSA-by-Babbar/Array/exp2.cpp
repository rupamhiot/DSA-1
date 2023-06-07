#include <iostream>
#include <climits>
using namespace std;

int getsum(int arr[], int n)
{

    int min = 0; // Initialize min to a large value

    for (int i = 0; i < n; i++)
    {
        min=min+arr[i];
    }
    return min;
}



int main()
{
    int size;
    cin >> size;
    int arr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n = size; 

    int result = getsum(arr, n);
    cout << "Sum: " << result << endl;

    return 0;
}
