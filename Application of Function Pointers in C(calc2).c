//calculator with function pointer
#include<stdio.h>
#include<stdlib.h>

#define ops 4

float sum(float a, float b) {return (a+b);}
float sub(float a, float b) {return (a-b);}
float mult(float a, float b) {return (a*b);}
float divi(float a, float b) {return (a/b);}


int main(){

    float (*ptr2func[ops]) (float, float) = {sum, sub, mult, divi};
    int choice;
    float a, b;

    printf("Enter 0 for sum, 1 for sub, 2 for mult, 3 for divi: ");
    scanf("%d", &choice);

    printf("Enter 2 numbers : ");
    scanf("%f %f", &a, &b);

    printf("%.2f", ptr2func[choice](a, b));

    return 0;
}
