//Static scoping

#include<stdio.h>
#include<stdlib.h>

int fun1(int);
int fun2(int);

int a = 5;

int main()
{
    int a=10;
    a = fun1(a); // a = 10
    printf("%d", a);

    return 0;
}

int fun1(int b)
{
    b = b+10;  // b = b(10)+10
    b = fun2(b);
    return b;
}

int fun2(int b)
{
    int c;
    c = a+b; //globally find the value of a = 5 + b(20)
    return c;
}


/*
    In static/lexical scope defination of a variable is resolved by searching it's containing block or
    function and if not found, then search the outer containing block/function, if still not found then
    search outer function/block and so on...
*/
