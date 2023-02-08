#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x, val1, val2, count =0;
    int i;

    printf("Enter a number to check prime or not: ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));
    val2 = x;

    //printf("number:%d\nSQRT:%d\n", val2, val1);

    for(i=2; i<=val1; i++)
    {
        if(val2%i == 0)
        {
            count = 1;
        }
        //printf("i:%d\nmod:%d\ncount:%d\n",i, val2%i, count);
        //count = 0;
    }

    if(count == 0 && x != 1 || x == 2 || x ==3)
    {
        printf("%d is a prime number.\n", x);
    }
    else
    {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}

/*
    A prime number is a number which is greater then 1 and it has only two factors, namely 1 and the
    number itself.
    EX: 2,3,5,7,11......
    1 is not a prime number because it has only one factor.
*/
