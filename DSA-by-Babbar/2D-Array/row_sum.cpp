#include <iostream>
using namespace std;
void sum(int arr[][4],int i, int j)
{
    cout<<"printing sum"<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
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
    sum(arr,3,4);



    return 0;
}