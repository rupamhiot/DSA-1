#include<iostream>
#include<vector>
using namespace std;
bool b_search(vector<vector<int>> &matrix,int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = (row * col) -1;
    int mid = start + (end - start)/2;
    while(start <= end )
    {
        int index = matrix[mid/col][mid%col];
        if(index == target)
            return 1;
        else if(index > target)
            start = mid++;
        else
            end = mid--;
        mid = start + (end - start)/2;
    }
    return 0;
}
int main()
{
           
           
return 0;
}