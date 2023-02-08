#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows, i , j, n;

    printf("How many rows you want to print: ");
    scanf("%d", &rows);

    n = 1;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}

/*
    Floyd's triangle, named after Rober Floyd, is a right angled triangle, which is made using natural
    numbers. It starts from 1 and consecutively selects the next greater number in sequence.
*/
