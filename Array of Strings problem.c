#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char *ptr[] = {"2 oranges", "2 apples", "3 bananas", "1 pineapples"};

    if(strcmp(ptr[1], ptr[2])< 0)
    {
        printf("%s is lesser than %s", ptr[1], ptr[2]);
    }
    else if(strcmp(ptr[1], ptr[2])> 0)
    {
        printf("%s is greater than %s", ptr[1], ptr[2]);
    }

    return 0;
}
