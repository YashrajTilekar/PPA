/*
Accept N numbers from user and return Frequency of 11
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] ,int iLength)
{
    int iCnt = 0 ,iFreq = 0 ;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iSize = 0 ,iCnt = 0 ,iRet = 0;
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

    iRet = Frequency(p ,iSize);
    printf("Frequency of 11 is :%d",iRet);

    free(p);

    return 0;
}