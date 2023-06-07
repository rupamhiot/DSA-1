#include<iostream>
#include<vector>

using namespace std;

void insertion(int arr1[],int n1,int arr2[],int n2)
{
    vector<int>arr;
    vector<int>::iterator itr;

for(int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        if(arr1[i]==arr2[j])
        {
            arr.push_back(arr1[i]);
            arr2[j]=-342;
            break;
        }
    }
}
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i];
}

}
int main()
{
    int arr1[]={2,3,4,5,6,7,8};
    int arr2[]={1,2,3,12,56,5};
    int n1,n2;
    n1=sizeof(arr1)/sizeof(arr1[0]);
    n2=sizeof(arr2)/sizeof(arr2[0]);
    insertion(arr1,n1,arr2,n2);

          
 return 0;
}