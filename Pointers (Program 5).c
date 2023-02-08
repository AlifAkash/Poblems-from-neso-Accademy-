#include<stdio.h>
#include<stdlib.h>

void f(int *p, int *q){
    p = q;
    *p = 2;
}

void f1(int *p, int *q){
    q = p;
    *p = 2;
}

int main(){

    int i = 0, j =1;
    f(&i, &j);
    printf("%d %d\n", i, j);
    int k = 0, l =1;
    f1(&k, &l);
    printf("%d %d\n", k, l);
    return 0;
}
