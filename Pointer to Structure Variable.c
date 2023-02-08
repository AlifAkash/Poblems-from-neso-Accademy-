#include<stdio.h>
#include<stdlib.h>

struct abc{
    int x;
    int y;
};

int main(){

    struct abc a = {0,1};
    struct abc *ptr = &a;

    printf("%d %d", ptr->x, ptr->y); //ptr->x == (*ptr).x and ptr->y == (*ptr).y

    return 0;
}
