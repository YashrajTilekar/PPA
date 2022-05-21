#include<stdio.h>

int main()
{
    char c='Y';
    char *cptr=&c;

    int i=50;
    int *iptr=&i;

    float f=76.77;
    float *fptr=&f;

    double d=85.40;
    double *dptr=&d;

    printf("%c\n", *cptr);
    printf("%d\n", &c);
    printf("%d\n", sizeof(iptr));
    printf("%d\n", sizeof(cptr));
    printf("%d\n", sizeof(i));

    
    


    return 0;

}
