#include<stdio.h>
#include<stdlib.h>

int main(){

    int var = 0x43Ff; // when a digit starts with 0X/0x first then compiler treated the number as hex number.
    printf("%x\n", var); // print hexadecimal
    printf("%X\n", var);
    printf("%d\n", var);// convert to decimal then print

    return 0;
}
