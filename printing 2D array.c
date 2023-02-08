#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[2][3]={{11,22,33},{44,55,66}};
    int i, j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
