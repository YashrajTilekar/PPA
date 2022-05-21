#include<stdio.h>



struct demo
{
    int i;
    int j;
    float f;
};

int main()
{
    struct demo obj1;

    obj1.i=10;
    obj1.j=20;
    obj1.f=1.11;

    printf("%d \n",obj1.i);
    printf("%d \n",obj1.j);
    printf("%f \n",obj1.f);

    return 0;
}
