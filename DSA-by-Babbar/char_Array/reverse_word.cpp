#include <iostream>
using namespace std;
string reverse_char(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
string reverse_word(string s)
{
    string temp = "";
    string temp1 = "";
    for (int j = 0; j < s.length(); j++)
    {
       while(s[j]!=' ')
       {
         temp.push_back()
       }
    }
    return temp1;
}

int main()
{
    string s = "I am a boy";
    cout << reverse_char(s);
    // cout << reverse(s);
    return 0;
}