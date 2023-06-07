#include <iostream>
#include <vector>
using namespace std;

template<class T>
T maxarray(vector<T> &arr)
{   
    T maxElement = arr[0];
    typename vector<T>::iterator itr;
    for (itr = arr.begin(); itr != arr.end(); itr++)
    {
        if (*itr > *(itr + 1))
            maxElement = *itr;
    }
    return maxElement;
}

int main()
{
    vector<int> arr = {1, 3, 4, 5, 2};
    int result = maxarray(arr);
    cout << result;

    return 0;
}
