#include <iostream>
using namespace std;
string palindrom(string n, int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        if (n[i] != n[size - i - 1])
        {
            return "is not a palindrom";
        }
    }
    return "is a palindrome";
    
}
int main()
{
    string n;
    cout << "write what you want to chaeck" << endl;
    cin >> n;
    int size = n.length();
    cout<<palindrom(n, size);
}