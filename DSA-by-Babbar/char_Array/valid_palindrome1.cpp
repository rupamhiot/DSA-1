#include <iostream>
using namespace std;
class Validpalindrom
{
private:
    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        else
            return 0;
    }
    char lowercase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool ispalindrome(string s)
    {
        int start = 0;
        int end = s.size()-1;
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }
        return 1;
    }

public:
    bool palindrome(string s)
    {
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        for (int i = 0; i < temp.length(); i++)
        {
            temp[i] = lowercase(temp[i]);
        }
        return ispalindrome(temp);
    }
};
int main()
{
    Validpalindrom obj1;
    string arr;
    cout << "Enter word to check is it palindrome or not" << endl;
    cin >> arr;
   cout<< obj1.palindrome(arr);

    return 0;
}