#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size=0;              
    int *ptr=NULL;

    printf("enter number of elements :\n");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));        //step1: Allocate the memory

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
    }

    else
    {
        printf("Memory successfully allocated\n");
    }

    //step2: Use the memory

    free(ptr);         //step3:Free the memory

    return 0;
}