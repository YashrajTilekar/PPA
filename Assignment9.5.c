/*
Accept N numbers from user and accept one another number as NO ,
return Frequency of NO from it
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] ,int iLength ,int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iSize = 0 ,iNumber = 0 ,iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number Of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable To Allocate Memory\n");
        return -1;
    }

    printf("Enter %d Elements\n ",iSize);

    for(iCnt = 0 ;iCnt < iSize ;iCnt++)
    {
        printf("Enter Element %d\n",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter a NUmber to Calculate Frequency\n");
    scanf("%d",&iNumber);

    iRet = Frequency(p,iSize,iNumber);
    printf("Frequeny of %d is :%d",iNumber,iRet);

    return 0;
}