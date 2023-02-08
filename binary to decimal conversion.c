#include<stdio.h>
#include<stdlib.h>

int main()
{
    int binary, weight = 1, decimal = 0, rem;

    printf("Enter a binary number to convert into deccimal: ");
    scanf("%d", &binary);

    while(binary != 0)
    {
        rem = binary % 10;
        decimal += weight*rem; //decimal = decimal+weight*rem
        binary /= 10; //binary = binary / 10
        weight *= 2; //weight = weight *2
    }

    printf("Decimal = %d\n",decimal);

    return 0;
}
