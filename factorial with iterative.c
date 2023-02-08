#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    int res = 1;
    while(n != 0)
    {
        res = res * n;
        n--;
    }
    return res;
}

int main()
{
    int number;
    printf("Enter a number to find the factorial: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d ", number, fact(number));
    return 0;
}
/*
    iterative is time and storage efficient while recursive is for clean and clear understand of code.
*/
