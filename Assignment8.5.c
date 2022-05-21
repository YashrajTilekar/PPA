/*
Accept N numbers from user and Display elements which are Multiples of 11
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] ,int iLength)
{
    int iCnt = 0 ;

    printf("Multiples of 11 are as follows :\n");

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(((Arr[iCnt] % 11) == 0) )
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0 ,iCnt = 0;
    int *p = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable To Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        printf("Enter %d element\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p ,iSize);

    free(p);

    return 0;
}