#include <iostream>
#include <vector>
using namespace std;
vector<int> wave(vector<vector<int>> arr, int nRows, int mcol)
{
    vector<int> ans;
    for (int col = 0; col < mcol; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for(int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}


int main()
{

    return 0;
}