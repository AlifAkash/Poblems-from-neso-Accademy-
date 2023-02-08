#include<stdio.h>
#include<stdlib.h>

int fun(int a)
{
    if( a == 1)
    {
        return 1; // return 1 means back the value to where it was called
    }
    else
    {
        return 1+ fun(a-1); // 1 + {(n=9) - 1}
    }                       // 2nd iteration 1+(8-1)
}                           // 3rd ite... 1+(7-1)......

int main()
{
    int n = 9;
    printf("%d ",fun(n));

    return 0;
}
