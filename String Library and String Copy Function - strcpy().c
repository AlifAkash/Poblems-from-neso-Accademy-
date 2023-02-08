#include<stdio.h>
#include<string.h>

int main(){
    char str1[10] = "Hello";
    char str2[10];
    char str3[10];
    char str4[4];

    strcpy(str3, strcpy(str2, str1));

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    strncpy(str4, str1, sizeof(str4));
    printf("%d\n", sizeof(str4));
    str4[sizeof(str4)-1]= '\0';
    printf("%s\n", str4);

    return 0;
}
