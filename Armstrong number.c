#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int count = 0, result = 0, rem, cnt, mul = 1, number;

    printf("Enter any number: ");
    scanf("%d", &number);

    //finding order of number
    int q = number;

    while(q != 0)
    {
        q = q/10;
        count++;
    }

    //muitipling all digit by the number's order times and adding them
    cnt = count;
    q = number;

    while(q != 0)
    {
        rem = q%10;

        while(cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }

        result += mul;
        q = q/10;
        cnt = count;
        mul = 1;
    }

    if(result == number)
    {
        printf("%d is an armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an armstrong number.\n", number);
    }

    return 0;
}

/*
    An armstrong number of order n is a number in which each digit when multiplied by itself n number
    of times and finally added together, results the same number.
    EX: (3*3*3)+(7*7*7)+(1*1*1) = 371.
*/

