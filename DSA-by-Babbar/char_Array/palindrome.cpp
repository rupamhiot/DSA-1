#include<iostream>
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
string palindrome(string arr)
{
    int end = arr.size()-1;
    int start = 0;
    while(start <= end )
    {
        if( lowercase(arr[start]) != lowercase (arr[end])){
            return "is not a palindrome";
        }
        else{
            start++;
            end--;
        }
    }
    return "is a palindrome";
    
}
int main()
{
    string arr;
    cout<<"Enter word to check is it palindrome or not"<<endl;
    cin>>arr;
    
    string result = palindrome(arr);
    cout<<result<<endl;       
           
    return 0;
}