#include <stdio.h>

struct demo
{
    int i;
    int j;
};

struct hello
{
    float f;
    int no;
    struct demo dobj;
};

int main()
{
    struct hello hobj;

    hobj.f=2.22;
    hobj.no=11;
    hobj.dobj.i=85;
    hobj.dobj.j=75;

    printf("%f \n", hobj.f);
    printf("%d \n", hobj.no);
    printf("%d \n", hobj.dobj.i);
    printf("%d \n", hobj.dobj.j);
    printf("%d \n", sizeof(hobj));


    return 0;
}