#include<stdio.h>
#include<stdlib.h>

int main(){

    int i = 0;

    for(printf("one\n"); i<3 && printf(""); i++){ // printf("") means condition is false. so tarminate loop;
        printf("Hi!\n");                             // only print "one";
    }

    return 0;
}
