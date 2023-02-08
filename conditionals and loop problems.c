#include<stdio.h>
#include<stdlib.h>

int main(){

    int i = 1024;

    for(; i; i>>= 1){
        printf("Hello world\n");
    }

    /*
    In this loop condition if i = any value other than zero then print HELLo WORLD for 1 time
    and increment and decrement value is shift the binary value position 1 bit right.
    i>>=1 is write shift the binary value by 1 position.
    1024 = 10000000000
    after 1st right shift becomes
    512 = 01000000000
    after 2nd R shift...
    256 = 00100000000
    .
    .
    .
    1= 00000000001
    0= 00000000000
    Here i = 0 means condition false
    and terminates the program after printing Hello World 11 times.
    */

    return 0;
}
