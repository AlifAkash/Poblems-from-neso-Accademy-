#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[]={11,22,54,60,2};
    int *p, sum=0;

    p=&arr[0];

    printf("%d %d %d\n", p, p+1, *p);//1st= address of arr[0], 1st= address of arr[1], value of arr[0]

    for(p=&arr[0]; p<=&arr[4]; p++)
        sum += *p;

    printf("Sum of elements are: %d\n", sum);

    //array name as pointer
    sum = 0;
    for(p=arr; p<=arr+4; p++)
        sum += *p;

    printf("Sum of elements are: %d\n", sum);

    return 0;
}
