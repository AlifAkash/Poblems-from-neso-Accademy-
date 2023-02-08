#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    int arr[N];
    int i;

    printf("Array of 10 elements:\n");
    for(i=0;i<N;i++)
    {
        printf("Enter array index of array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal order array: \n");
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nReverse order array: \n");
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
