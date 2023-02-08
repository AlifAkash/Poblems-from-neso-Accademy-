#include<stdio.h>
#include<stdlib.h>

int length;
int breadth;

struct point{
    int x;
    int y;
};

struct ractangle{
    struct point upper_left;
    struct point lower_right;
};

 int area(struct ractangle r){
     //const int length;
     //const int breadth;

     length = r.lower_right.x - r.upper_left.x;
     breadth = r.upper_left.y - r.lower_right.y;

     return length * breadth;
}

int main(){

    struct ractangle r;

    printf("Enter Upper left coordinates of ractangle r :");
    scanf("%d %d", &r.upper_left.x, &r.upper_left.y);

    printf("Enter lower right coordinates of ractangle r :");
    scanf("%d %d", &r.lower_right.x, &r.lower_right.y);

    printf("The area of ractangle is: %d\n", area(r));

    printf("The lehgth of ractangle is: %d\n", length);
    printf("The lehgth of ractangle is: %d\n", breadth);

    return 0;
}
