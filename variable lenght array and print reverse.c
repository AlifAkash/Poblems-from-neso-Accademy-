#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter all the elements of array: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray elements in reverse order are: \n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
