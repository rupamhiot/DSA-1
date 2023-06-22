#include <iostream>
using namespace std;
string remove_space(string str)
{
    string str1="";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str1.push_back('@');
            str1.push_back('4');
            str1.push_back('0');
        }
        else
        {
            str1.push_back(str[i]);
        }
    }
    return str1;
}
int main()
{
    string s = "I am a boy";
    cout << remove_space(s);
}