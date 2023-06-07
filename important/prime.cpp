#include<iostream>
using namespace std;
string prime(int n)
{
    if(n==0||1)
        return "is not a prime number";
    else if(n==2 )
        return "it is a prime number";
    else if(n%2==0)
        return "is not a prime number";
    else 
        return "is a prime number";

}
int main()
{
    int n;
    cin>>n;
    string result;
    cout<<prime(n);
}