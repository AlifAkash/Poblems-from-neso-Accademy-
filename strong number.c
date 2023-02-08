#include<stdio.h>
#include<stdlib.h>

int main (){

    int number, result = 0, fact = 1, rem, i;

    printf("Enter a number to check it is strong number or not: ");
    scanf("%d", &number);

    int q = number;

    while(q != 0)
    {
        rem = q%10;

        for(i=1; i<=rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q/10;
    }

    if(result == number)
    {
        printf("%d is a strong number.\n", number);
    }
    else
    {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}

/*
    A strong number is a number in which the sum of factorial of individual digits of number is equal to
    original number.
    EX: 1!+4!+5! = 1+24+120 = 145
*/

