#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[2][2][2]={    {
                {1,2},
                {3,4},
               },
               {
                {5,6},
                {7,8}
               }
        };

    printf("%d\n", ***a ); //frist element of frist 2d array and first 1d array 1
    printf("%d\n", ***(a+1) ); //frist element of second 2d array and first 1d array 5
    printf("%d\n", **(*(a)+1) ); //first element of frist 2d array and seccnd 1d array 3
    printf("%d\n", **(*(a+1)+1) ); //frist element of second 2d array and second 1d array 7
    printf("%d\n", *(*(*(a)+1)+1) );//4
    printf("%d\n", *(*(*(a+1)+1)+1) );//8
    printf("%d\n", *(**(a+1)+1) ); //6
    printf("%d\n", *(**(a)+1) ); //2

    return 0;
}
