#include <iostream>
#include <vector>
using namespace std;
void move_zero_to_right(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
void print(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 0, 3, 0, 0, 4, 5, 0, 4};
    move_zero_to_right(arr);
    print(arr);

    return 0;
}