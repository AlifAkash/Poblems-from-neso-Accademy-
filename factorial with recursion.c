#include<stdio.h>
#include<stdlib.h>

int fact(int);

int main()
{
    int n;
    printf("Enter a number to find it's factorial: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d", n, fact(n));

    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
