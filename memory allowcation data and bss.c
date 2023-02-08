#include<stdio.h>
#include<stdlib.h>

static int i; // stores in bss segment
static int i = 27; // stores in data segment
static int i; // stores in bss segment

int main(){

    printf("%d\n",i); // print the data segment value as initialize

    static int i; // local variable get preference than global variables
    printf("%d\n", i);

    return 0;
}
