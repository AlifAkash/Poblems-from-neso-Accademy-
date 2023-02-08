#include<stdio.h>
#include<stdlib.h>

struct ournode{
    char x, y, z;
};

int main(){

    struct ournode p = {'1','0','a'+2};
    char *q = &p;

    printf("%c %c", *((char*)q+1), *((char*)q+2));

    return 0;
}
