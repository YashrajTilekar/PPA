#include <stdio.h>

struct demo
{
    int i;
    struct demo *ptr;
};



int main()
{
   struct demo dobj1,dobj2,dobj3;

   dobj1.i=10;
   dobj1.ptr=&dobj2;

   dobj2.i=20;
   dobj2.ptr=&dobj3;

   dobj3.i=30;
   dobj3.ptr=NULL;

   printf("%d\n",)

    return 0;
}