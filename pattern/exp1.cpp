#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int i, j=1;
    while (j <= n)
    {
        for (i = 1; i <= 4; i++)
        {
            cout << n-i+1;
        }
        cout<<endl;
        j++;
    }
}