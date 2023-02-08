#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[][3]= {1,2,3,4,5,6};
    int (*ptr)[3] = a;

    printf("%d\n", *ptr[0]); //pointing to 1st 1d array
    printf("%d\n", *ptr[1]); //pointing to 2nd 1d array

    printf("%d\n", (*ptr)[0]); //pointing first element of 1st 1d array
    printf("%d\n", *(ptr)[1]); //pointing first element of 2nd 1d array

    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ptr++;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);
    return 0;
}
