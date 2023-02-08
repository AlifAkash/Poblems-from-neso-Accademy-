#include<stdio.h>
#include<stdlib.h>

int add(int, int); //functions prototyping

int areaofractangle(int length, int breadth)//decleartions of functions
    {
        int area = length*breadth;
        return area;
    }

int main()
{
    int l, b, m, n;

    printf("Enter length and breadth of a ractangle: ");
    scanf("%d %d", &l, &b);

    int area = areaofractangle(l,b);

    printf("%d\n", area);

    m = 30, n = 20;
    int sum = add(m,n);

    printf("Sum is %d\n", sum);

    return 0;
}

int add(int a, int b)// declearations of functions
{
    return a+b;
}

/*
    A funtion is basically a set of statements that takes inputs, perform some computations and performs
    the output.

    Arguments is a actual perameter that and perameter is called as formal perameter. Argument is actual
    value that pass through the formal perameter. Argument is called when call and pass value
    ANd perameter is called when formally definations of functions is decleared.

    Actual perameters/arguments = pass the perameters to a function
    Formal perameter = receive the perameters by the function
*/
