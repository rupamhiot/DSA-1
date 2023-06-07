#include <iostream>
using namespace std;
bool LS(int arr[], int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
            return 1;
    }
    return 0;
    
}
int main()
{
    int size;
    cout<<"Enter the size";
    cin >> size;
    int arr[20];
    

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;


    int n = size;
    int result = LS(arr, n,key);
    if(result)
        cout<<"Key is found";
    else
        cout<<"key "<<key<<"is not found";

}