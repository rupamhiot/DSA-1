#include<stdio.h>
int main() {
    int arr[5] = {
        1,
        2,
        3,
        4,
        5
    };

    // Assume base address of arr is 2000 and size of integer is 32 bit

    printf("%d %d", &arr,&arr[3]);

    return 0;
}