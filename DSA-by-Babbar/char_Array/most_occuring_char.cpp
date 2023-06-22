#include <iostream>
using namespace std;
char most_occuring_char(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 25; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalans = ans + 'A';
    return finalans;
}
int main()
{
    string s = "ABBBCD";
    cout << most_occuring_char(s) << endl;

    return 0;
}