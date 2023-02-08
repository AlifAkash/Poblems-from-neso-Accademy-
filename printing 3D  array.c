#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[2][2][3] = { //I want 2 of 2D array with 2 row and 3 columns;
                            {{1,2,3},{4,5,6}},
                            {{7,8,9},{10,11,12}}
                        };
    int i, j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
