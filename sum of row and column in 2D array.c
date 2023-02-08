#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5][5]=  {
    {8,3,9,0,10},
    {3,5,17,1,1},
    {2,8,6,23,1},
    {15,7,3,2,9},
    {6,14,2,6,0}
    };

    int sum =0, i,j;

    printf("Row sum: ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColoum sum: ");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}
