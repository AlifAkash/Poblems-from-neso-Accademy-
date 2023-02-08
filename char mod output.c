#include<stdio.h>
#include<stdlib.h>

int main(){

    char c = 255;
    c = c+10;

    printf("%d\n", c); // 265 % 255 = 9

    return 0;
}
