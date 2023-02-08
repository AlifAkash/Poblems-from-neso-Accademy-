#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b, sum, carry;

    printf("Enter two number you want to add: ");
    scanf("%d %d",&a,&b);

    while(b != 0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }

    printf("sum of two nimber is : %d", sum);

    return 0;
}
