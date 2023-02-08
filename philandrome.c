#include<stdio.h>
#include<stdlib.h>

int main (){

    int n, result =0, q, rem;

    printf("Inter a number to check philandrome or not: ");
    scanf("%d", &n);

    q = n;

    while(q != 0){
        rem = q%10;
        result = result*10+rem;
        q = q/10;
    }

    if(result == n){
        printf("Number is Philandrome");
    }
    else{
        printf("Number is not a Philandrome");
    }

    return 0;
}

/*
    A number or a word or a phase if reads backwards give the same number or word or phase as it is being
    read forword is called philandrome.
*/
