#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int main()
{
    int a[MAX][MAX], arow, acolunm;
    int b[MAX][MAX], brow, bcolunm;
    int product[MAX][MAX];
    int i,j,k;
    int sum = 0;

    printf("Enter row and colunm of A matrix: ");
    scanf("%d %d", &arow, &acolunm);

    printf("Enter the elements of matrix: ");
    for(i=0; i<arow; i++)
    {
        for(j=0; j<acolunm; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Resulting Array A is: \n");
    for(i=0; i<arow; i++)
    {
        for(j=0; j<acolunm; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter row and colunm of B matrix: ");
    scanf("%d %d", &brow, &bcolunm);

    printf("Enter the elements of matrix: ");
    for(i=0; i<brow; i++)
    {
        for(j=0; j<bcolunm; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Resulting Array B is: \n");
    for(i=0; i<brow; i++)
    {
        for(j=0; j<bcolunm; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if(arow != bcolunm)
    {
        printf("\nSorry these matrix are not applicable for multiply!!\n");
    }
    else
    {
        for(i=0; i<arow; i++)
        {
            for(j=0; j<bcolunm; j++)
            {
                for(k=0; k<brow; k++)
                {
                    sum += a[i][k]*b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }

        printf("\nAfter multiplication resulting matrix: \n");

        for(i=0; i<arow; i++)
        {
            for(j=0; j<bcolunm; j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
