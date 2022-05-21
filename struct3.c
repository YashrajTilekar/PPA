#include <stdio.h>

struct demo
{
    int i;
    int j;
};

int main()
{
    const struct demo obj={20,25};

    printf("%d \n",obj.i);
    printf("%d \n",obj.j);


    return 0;
}