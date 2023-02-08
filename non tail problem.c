#include<stdio.h>
#include<stdlib.h>

void fun1(int n)
{
    if(n==0)
        return;
    fun1(n/2);
    printf("%d", n%2);
}

//fun1 takes decimal value and gives binary value

void fun2(int n)
{
    if(n<=0)
        return;
    printf("%d \n", n);
    fun2(2*n);
    printf("\n%d ", n);
}

int main()
{
    printf("1st function: \n");
    fun1(6);
    printf("\n2nd funcion: \n");
    fun2(1000000000); //1073741824
    return 0;
}
