#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, j;
    char a[2][3] = {{'a', 'b', 'c'},{'d', 'e', 'f'}};
    char b[3][2];
    char *p = *b;

    for(i=0; i<2; i++){
        for(j =0; j<3; j++){
            *(p + 2*j + i) = a [i][j];
        }
    }

    return 0;
}

/* b = a d
       b e
       c f
*/

