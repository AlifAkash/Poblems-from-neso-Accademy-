#include<stdio.h>
#include<stdlib.h>

int main()
{
    int base, exponenet;
    int power = 1;
    double power1 = 1.0;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponenet);

    int expo = exponenet;

    if(exponenet >= 0)
    {
        while(exponenet != 0)
        {
            power = power*base;
            exponenet--;
        }
        printf("%d to the power %d is %d\n", base, expo, power);
    }

    else
    {
        while(exponenet != 0)
        {
            power1 = power1*(1.0/base);
            exponenet++;
        }
        printf("%d to the power %d is %.10f\n", base, expo, power1);
    }

    return 0;
}
