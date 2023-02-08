#include<stdio.h>
#include<stdlib.h>

int *findmid(int array[], int lenght)
{
    return &array[lenght/2];
}

int main()
{
    int arr[]={32,54,95,62,55,88,64};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *mid = findmid(arr, n);
    printf("Mid value of array is: %d \n", *mid);

    return 0;
}
