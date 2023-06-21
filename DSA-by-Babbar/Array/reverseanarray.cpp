#include<iostream>
using namespace std;

// reverse an array
void reverseArray(int arr[] , int m)
{
	int n = m/2;
	for (int i = 0; i<n; i++)
	{
		swap(arr[i],arr[m-i-1]);
	}
}

// Reverse array after after given postion
void logic1(int arr[],int m,int x)
{
    int start = x+1;//4
    int end = m-1;
   
	while(start<end){
		swap(arr[start],arr[end]);
        start ++;
        end --;
    }
	
}

// for print
void print(int arr[],int n)
{
    for(int i =0; i<n;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
 int arr[]={1,2,3,4,5,6,7};
 int n = sizeof(arr)/sizeof(arr[0]);
// reverseArray(arr,n);
logic1(arr,n,4);
print(arr,n);

 return 0;
}