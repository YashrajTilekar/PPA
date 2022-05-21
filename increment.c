#include<stdio.h>

int main()
{
    int n1=10;
    int n2=10;

    int ans1=0;
    int ans2=0;

    ans1=n1++;                          //post increment
    printf("value of ans1 %d\n",ans1);
    printf("value of n1 %d\n",n1);

    ans2=++n2;                         //preincrement
    printf("value of ans2 %d\n",ans2);
    printf("value of n2 %d\n",n2);

    return 0;
}