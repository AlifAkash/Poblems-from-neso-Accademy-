#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    for(i=0; i<20; i++){
        switch (i){
            case 0: i+=5;
            case 1: i+=2;
            case 5: i+=5;
            default: i+=4;
        }

        printf("%d\n", i);
    }

    /* As there is no break statement so all 3 cases are executed and add 5+2+5+4=16 and print 16
    then increment the value and check the condiotion 17>20 and add default value 17+4 = 21 and
    print it. After that the conditions break and terminate the program.
    */

    return 0;
}
