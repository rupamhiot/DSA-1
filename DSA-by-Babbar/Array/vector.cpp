#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>&arr1,vector<int>&arr2,vector<int>arr3)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0,j = 0, k= 0;
    
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
            
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
            

        }
    }
    while(i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
void print(vector<int>&arr)
{
    int n=arr.size();

    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr1={1,3,5,7,8,9};
    vector<int>arr2={2,4,6};
    vector<int>arr3;
    Merge(arr1,arr2,arr3);
    print(arr3);
    return 0;
}