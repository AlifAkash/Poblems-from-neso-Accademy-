#include<stdio.h>
#include<stdlib.h>

int fun(int x, int y)
{
    x = 20;
    y = 10;
}

int fun1(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
}


int main()
{
    int x = 10, y = 20;

    fun(x,y); //call by value
    printf("x = %d y = %d\n",x,y);

    fun1(&x,&y);// call by reference
    printf("x = %d y = %d\n",x,y);

    return 0;
}
