#include<stdio.h>



extern int Add();

int main()
{
    int a=10;
    int b=20;
    int x=0;

    x=Add(a,b);

    printf("%d",x);

    return 0;
}