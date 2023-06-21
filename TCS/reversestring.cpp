#include<iostream>
using namespace std;
int main()
{
 string str = "abcde";

 int n = str.size();
 
 for (int i = 0; i <n/2; i++)
 {
    swap(str[i],str[n-1-i]);  
 }
 for (int i = 0; i < n; i++)
 {
    cout<<str[i];
 }
 
          
 return 0;
}