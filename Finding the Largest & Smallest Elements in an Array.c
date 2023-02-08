#include<stdio.h>
#include<stdlib.h>

void minmax(int arr[], int len,int *min,int *max)
{
    *min = *max = arr[0];
    for(int i=1; i<len; i++){
        if(arr[i]< *min)
        {
            *min= arr[i];
        }
        if(arr[i]> *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int arr[]={15,54,87,556,34,987,362,48,987,65,2,343,5,8,22};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min, max;

    minmax(arr,len, &min, &max);
    printf("The min value of array is %d and max value of array is % d\n", min, max);

    return 0;
}
