#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    int *p=&arr[0];
    int *q=&arr[4];

    printf("Value of p:%d\n", p);
    printf("Value of q:%d\n", q);
    
    p+3;
    printf("Value of p:%d\n", p);

    p=p+3;
    printf("Value of p:%d\n", p);

    q=q-3;
    printf("Value of q:%d\n", q);


    return 0;
}