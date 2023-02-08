#include<stdio.h>
#include<stdlib.h>

int main(){

    int var = 052; // when a digit starts with 0 first then compiler treated the number as octal number.
    printf("%d\n", var); // octal converted into decimal then print

    return 0;
}
