#include<stdio.h>

int main()
{
    int iNo=11;
    void *ptr=NULL;
    ptr=&iNo;
    *(int*)ptr;

    printf("%d\n",&iNo);
    printf("%d\n",ptr);

}