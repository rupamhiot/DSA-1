#include <iostream>
#include <algorithm>
using namespace std;
void pairs(int arr[], int n, int k)
{
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }

    int targetvalue=k;
    // cout<<targetvalue;
    int left = 0;
    int right = n - 1;
    // cout<<last;
    while (left < right)
    {   
        int currentvalue=arr[left]+arr[right];
        if(currentvalue==targetvalue)
        {
            cout<<"pair values are"<<arr[left]<<" "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(currentvalue>targetvalue)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
}
int main()
{
    int arr[] = {5,8,1,4,6,3,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    pairs(arr, n, 10);
    return 0;
}