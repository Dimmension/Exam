#include <stdio.h>
#include <stdlib.h>
// 1 2 3 4 
// 4 1 2 3
void leftShift(int arr[], int n){
    int buff = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = buff;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    leftShift(arr,5);
    return 0;
}