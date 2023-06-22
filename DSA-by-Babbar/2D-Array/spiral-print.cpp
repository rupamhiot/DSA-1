#include <iostream>
#include <vector>
using namespace std;
vector<int> spiral_print(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int starting_row_index = 0;
    int starting_col_index = 0;
    int ending_row_index = row - 1;
    int ending_col_index = col - 1;

    int count = 0;
    int total = row * col;
    while(count < total)
    {
        for(int index = starting_col_index; index <=ending_col_index ; index++)
        {
            ans.push_back(matrix[starting_row_index][index]);
        }
        starting_row_index++;
        for(int index = starting_row_index; index <=ending_row_index; index++)
        {
            ans.push_back(matrix[index][ending_col_index]);
        }
        ending_col_index--;
        for(int index = ending_col_index; index >= starting_col_index; index--)
        {
            ans.push_back(matrix[ending_row_index][index]);
        }
        ending_row_index--;
        for(int index = ending_row_index;index >=starting_row_index;index-- )
        {
            ans.push_back(matrix[index][starting_col_index]);
            starting_col_index++;
        }
    }
    return ans;
}
int main()
{

    return 0;
}