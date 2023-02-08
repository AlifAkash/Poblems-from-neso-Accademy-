#include<stdio.h>
#include<stdlib.h>

float sum(float a, float b) {return (a+b);}
float sub(float a, float b) {return (a-b);}
float mult(float a, float b) {return (a*b);}
float divi(float a, float b) {return (a/b);}


int main(){

    int choice;
    float a, b , result;

    printf("Enter 0 for sum, 1 for sub, 2 for mult, 3 for divi: ");
    scanf("%d", &choice);

    printf("Enter 2 numbers : ");
    scanf("%f %f", &a, &b);

    switch(choice){
        case 0 : result = sum(a, b); break;
        case 1 : result = sub(a, b); break;
        case 2 : result = mult(a, b); break;
        case 3 : result = divi(a, b); break;
    }

    printf("%.2f", result);

    return 0;
}
