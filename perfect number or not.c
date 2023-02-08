#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int i, rem, sum = 0;

    for(i=1; i<number; i++)
    {
        rem = number%i;
        if(rem == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == number)
    {
        printf("%d is a perfect number\n", number);
    }
    else
    {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}

/*
    A perfect number is a number which is obtain by taking the sum of all its proper positive divisor
    excluding the number.
    EX: 1+2+3=6
        1+2+4+7+14=28 etc
*/
