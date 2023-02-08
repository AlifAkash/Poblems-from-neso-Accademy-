#include<stdio.h>
#include<string.h>

int main(){
    char str1[5] = "He";
    char str2[8] = "llo!";

    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    printf("%s\n", str1);

    return 0;
}
