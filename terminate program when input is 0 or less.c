#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n;

    do
    {
        printf("Enter any number: ");
        scanf("%d", &n);
        if(n<0)
            break;
        printf("%d \n", n);
    }while(n != 0);

    return 0;
}
