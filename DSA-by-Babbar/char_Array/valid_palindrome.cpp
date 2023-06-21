#include <iostream>
using namespace std;
char lowercase(char arr)
{
    if(arr >='a' && arr<='z')
    {
        return arr;
    }
    else
    {
        char temp = arr - 'A'+ 'a';
        return temp;
    }
    
}
bool valid_palindrome(string arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        
    }

}
int main()
{
    string arr;
    cout << "Enter word to check is it palindrome or not" << endl;
    cin >> arr;
    valid_palindrome(arr);
    return 0;
}