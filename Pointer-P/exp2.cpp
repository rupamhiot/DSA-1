#include<iostream>
using namespace std;
void swap_pr(int &x,int &y)//swap because we use pass by value
{
    int temp =x;
    x=y;
    y=temp;
}
void swap_pv(int &x,int &y)//swap because we use pass by reference
{
    int temp =x;
    x=y;
    y=temp;
}
void swap_pp(int *x,int *y)// swap because we use pass by pointer
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two numer you want to swap"<<endl;
    cin>>a>>b;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b<<endl;
    swap_pp(&a,&b);
    cout<<a<<" "<<b<<endl;
}