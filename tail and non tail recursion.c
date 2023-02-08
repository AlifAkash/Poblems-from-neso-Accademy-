#include<stdio.h>
#include<stdlib.h>

void funTail(int n)
{
    if(n==0)
        return;
    else
    {
        printf("%d ", n);
        funTail(n-1);
    }
}

void funNontail(int n)
{
    if(n==0)
        return;
    else
    {
        funNontail(n-1);
        printf("%d ",n);
    }
}

int main()
{
    printf("Tail output: ");
    funTail(3);
    printf("\n");
    printf("Non tail output: ");
    funNontail(3);

    return 0;
}
