// C++ program to Find the missing element

#include <iostream>
using namespace std;

void findMissing(int arr[], int N)
{

    cout<<N;
	// int i;
	// int temp[N + 1];
	// for(int i = 0; i <= N; i++){
	// temp[i] = 0;
	// }
    //  for(i=0;i<=N;i++)
    // {
    //     cout<<temp[i];
    // }

	// for(i = 0; i < N; i++){
	// cout<<temp[arr[i] - 1];//temp[1-1]=1//temp[3-1]=1//temp[7-1]//temp[5-1]//temp[6-1]//temp[2-1]
	// }

    // for(i=0;i<N;i++)
    // {
    //     cout<<temp[i];
    // }


	// int ans;
	// for (i = 0; i <= N ; i++) {
	// 	if (temp[i] == 0)
	// 		cout<< i + 1;
	// }
	// cout << ans;
}

/* Driver code */
int main()
{
	int arr[] = { 1, 3, 7, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findMissing(arr, n);
}
