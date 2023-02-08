#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 0, b = 1, n, i, result = 0;

    printf("Enter the number of term you want print: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", a);
        result = a+b;
        a = b;
        b = result;
    }

    return 0;
}

/*
    IN fibonacci series, next term can obtain by sum of previous tow terms.
*/
