#include <iostream>
using namespace std;
int length(char c[])
{
   int i = 0;
   int count = 0;
   while (c[i] != '\0')
   {
      count++;
      i++;
   }
   return count;
}

char most_occuring_char(char input[])
{
    int arr[26] = {0};
    
    for (int i = 0; i < length(input); i++)
    {
        int number = 0;
        char ch = input[i];
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
    
    char finalans = ans + 'a';
    return finalans;
}
int main()
{
    char arr[] = "abbbbcd";
    cout << most_occuring_char(arr) << endl;

    return 0;
}