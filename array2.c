#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    int *p=&arr[0];
    int *q=&arr[4];

    printf("Value of p:%d\n", p);

    p+3;

    printf("Value of p:%d\n", p);

    return 0;
}