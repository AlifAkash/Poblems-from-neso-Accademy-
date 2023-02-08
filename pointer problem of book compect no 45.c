#include<stdio.h>
#include<stdlib.h>

int main()
{
    static char *s[] = {"black", "white", "yellow", "violet"};
    char **ptr[] = {s+3, s+2, s+1, s}, ***p;
    p = ptr;
    p++;
    printf("%s \n", *--*++p + 3);

    printf("\nab");
    printf("\bsi");
    printf("\rhc");

    return 0;
}
