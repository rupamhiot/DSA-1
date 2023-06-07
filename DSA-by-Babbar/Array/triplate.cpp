#include <iostream>
#include <vector>
using namespace std;
void sumofpair(vector<int> &vec, int n, int sum)
{
    vector<vector<int>> ans;
    int i = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((vec[i] + vec[j] + vec[k]) == sum)
                {
                    cout << vec[i] << " "
                         << vec[j] << " "
                         << vec[k] << endl;
                }
            }
        }
    }

    // Iterate over the rows
    for (const auto &row : ans)
    {
        // Iterate over the columns of each row
        for (const auto &element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl; // Print a new line after each row
    }
}
int main()
{
    int sum = 5;
    vector<int> vec;
    vector<int>::iterator itr;
    vec = {2, 3, 2, 6, 1};
    int n = vec.size();
    sumofpair(vec, n, sum);
    return 0;
}