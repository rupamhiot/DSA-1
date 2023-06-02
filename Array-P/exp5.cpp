#include<iostream>
using namespace std;
void myfun(char arr[])
{
    int i=0;
    while (arr[i]!='\0')
    {
        if(arr[i]=='a')
            arr[i]='z';
        i++;    
    }
    
}
int main()
{
    char str[]="Rupam";
    cout<<str;
    myfun(str);
    cout<<str;
}