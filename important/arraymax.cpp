#include <iostream>
#include <vector>
using namespace std;
template <class T>
T maxarray(vector<T> &arr)
{
    T temp = 0;
    typename vector<T>::iterator itr;
    itr = arr.begin();
    for (itr = arr.begin(); itr != arr.end(); itr++)
    {
        if (*itr > temp)
            temp = *itr;
    }
    return temp;
}
int main()
{
    vector<int> arr = {1, 3, 4, 5, 45, 455666777, 2};
    int result;
    result = maxarray(arr);
    cout << result;
}