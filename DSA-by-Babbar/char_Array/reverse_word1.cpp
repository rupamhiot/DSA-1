#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            len=len+1;
        }
    }
   // cout<<len<<endl;
   string s[len+1];
   string s1="";
   int j=0;
   for(int i=0;i<str.length();i++)
   {
        if(str[i]==' ')
        {
            s[j]=s1;
            s1="";
            j++;
        }
        else if(str[i]!=' ')
        {
            s1=s1+str[i];
        }
   }
   s[j]=s1;
//    cout<<s[0]<<endl;
//    reverse(s[1].begin(),s[1].end());
//     cout<<s[1]<<endl;
//    cout<<s[2]<<endl;
//    cout<<s[3]<<endl;
   for(int i=0;i<len+1;i++)
   {
         reverse(s[i].begin(),s[i].end());
         cout<<s[i]<<" ";
   }
   cout<<endl;
}