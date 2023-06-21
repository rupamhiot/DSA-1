#include<iostream>
using namespace std;
string reverse(string re)
{
    int n = re.length();
    for(int i =0; i< n/2; i++)
    {
        swap(re[i],re[n-i-1]);
    }
    return re;
}
int main()
{
    string arr;
    cout<<"Enter your name: ";
    cin>>arr;
    string reve = reverse(arr);
    cout<<reve;
    return 0;
}