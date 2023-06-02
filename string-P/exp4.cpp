#include<iostream>
#include <string>
using namespace std;
string
repeat (string s, int n)
{
string s1 = s;
for (int i = 1; i < n; i++)
s += s1;
return s;
}

int
main ()
{
string s = "Prepinsta ";
int n = 4;
cout << repeat (s, n) << endl;;
return 0;
}