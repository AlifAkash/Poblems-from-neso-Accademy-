// Dynamic scoping
// Since dynamic scoping is very uncommon in
// prints 30 in a language that uses dynamic scoping.

#include<stdio.h>
#include<stdlib.h>

int fun1(int);
int fun2(int);

int a = 5;

int main()
{
    int a = 10;

    a = fun1(a); // a = 10
    printf("%d", a);

    free(a);

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
    c = a+b; //in dynamic scoping find the value of a = 10 + b(20)
    return c;
}

/*
    In dynamic scope defination of a variable is resolved by searching it's containing block and
    if not found, then searching the calling block/function, if still not found then the search
    the function which called the calling function and so on...
*/
