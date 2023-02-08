#include<stdio.h>
#include<stdlib.h>

int add(int a, int b){

    return a+b;

}

int main(){

    int result;
    int (*ptr)(int, int) = &add;
    //ptr = &add;
    //int (*ptr)(int, int) = add; alternative 2

    result = (*ptr)(10, 20);
    //result = prt(10, 20); for alterternative 2

    printf("%d", result);

    return 0;
}
