#include<stdio.h>

int main(){

    int *ptr = "Hello world";

    printf("Keo dabay rakhte parba na. "
           "---Bangabondhu Sekh mujibur rahman.");

    printf("\n%s", ptr);

    printf("\n%.5s", ptr);

    printf("\n%6.5s", ptr);
    printf("\n");

    puts(ptr);
    puts(ptr);

    return 0;
}
