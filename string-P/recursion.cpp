#include<iostream>
using namespace std;
int factorial(int n)
{  
    int result=1; 
    int i=1;
    while(i<=n)
    {
        return (n*factorial(n-1));
    }
    
}
int main()
{
    int n;
    cin>>n;
    int result=factorial(n);
    cout<<result;
}