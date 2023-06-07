#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
     cin>>n;
     int count=1;
    while (i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}