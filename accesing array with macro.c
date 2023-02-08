#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
    int arr[N], i;

    for(i=0;i<N;i++)
    {
        printf("Enter the input of array index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are as follows:\n");

        for(i=0;i<N;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
