#include<stdio.h>
#include<stdlib.h>

int main(){

    enum bool {false, true};// here automatically assign false = 0, true = 1, then 3,4,5,6 so on value will assigned;

    enum bool var = true;

    printf("%d\n", var);

    enum point {x=0, y=0, t, z=0};

    printf("%d %d %d\n", x, y, z);// two or more names can have same value;

    printf("%d %d %d %d\n", x, y, z, t);// uninitialized names get value as previous+1, value can be assign in any order

    return 0;
}
