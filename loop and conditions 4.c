#include<stdio.h>
#include<stdlib.h>

int main(){

    unsigned int i = 500;

    printf("%d\n", i);
    printf("%hu\n", i);
    printf("%u\n", i);

    while(i++ !=0);
    printf("%d\n", i);

    /*
     here i is 4 byte and range is 0 to 4294967295 and while loop has no body. It only check the condition
     and starts from 501 and check 4294967295 times then the vue of i again becomes 0;
     But for post increment(i++) it print 1 after checking the loop
    */

    return 0;
}
