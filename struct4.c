#include <stdio.h>

struct demo
{
    const int i;
    const int j;
};

int main()
{
    struct demo obj={20,25};

    printf("%d \n",obj.i);
    printf("%d \n",obj.j);

    return 0;
}