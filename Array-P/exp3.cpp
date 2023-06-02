#include<iostream>
using namespace std;
int main()
{
   int a[]={1,4,7,{56}};
   cout<<sizeof(a)/sizeof(a[0]);

}