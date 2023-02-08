#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char p[20];
    char *s = {"string"};
    int lenght = strlen(s);

    for(int i = 0; i<lenght; i++){
        p[i] = s[(lenght-1) - i];
    }
    printf("%s", p);

    return 0;
}
