#include<stdio.h>
#include<stdlib.h>

union abc{
    int x;
    char y;
}var;

int main(){

    var.x = 65;

    printf("X is = %d\n", var.x);
    printf("Y is = %c\n", var.y);

    printf("%d", sizeof(var)); // size of union is taken according to the size of the largest member of union

    return 0;
}
