#include<stdio.h>

int main(){

    int a[10];
    char x[50];

    printf("Enter your string: ");
    gets(x);
    puts(x); // gets can store white space charecter in the string variable.

    printf("Enter your string: ");
    scanf("%9s", a);

    printf("%s\n", a); // scanf doesn't store white space charecter in the string variable.

    return 0;
}
