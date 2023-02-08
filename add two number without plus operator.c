#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y;

    printf("Enter two number to add: ");
    scanf("%d %d", &x,&y);

    if(y > 0)
    {
        while(y != 0)
        {
            x++;
            y--;
        }
    }

    if(y < 0)
    {
        while(y != 0)
        {
            x--;
            y++;
        }
    }

    printf("After adding result is : %d", x);

    return 0;
}
