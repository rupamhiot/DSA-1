#include <iostream>
using namespace std;
bool ls(int arr[][4],int k, int i, int j)
{
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j]== k)
            {
                return 1;
            }
        }
    }
    return 0;
}
void print(int arr[][4],int i,int j)
{
    cout<<"Matrx:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][4];
    int k;
    cout<<"Ente the element:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    print(arr,3,4);
    cout <<"Enter the element you want to search in 2D-Array:"<<endl;
    cin>>k;
    int result = ls(arr,k,3,4);
    if(result == 1)
    {
        cout <<"Yes"<<endl;
    }
    else
    cout << "No";


    return 0;
}