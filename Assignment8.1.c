/*
Accept N numbers from user and return Difference Between,
Summation of Even Elements AND Sumation of Odd elements
*/
#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[] ,int iLength)
{
    int iCnt = 0 ,iEsum = 0 ,iOsum = 0 ,iDiff = 0;

    for(iCnt = 0 ;iCnt < iLength ;iCnt++)
    {
        if( (Arr[iCnt] % 2) == 0)
        {
            iEsum = iEsum + Arr[iCnt];
        }
        else
        {
            iOsum = iOsum + Arr[iCnt];
        }
    }

    iDiff = iEsum - iOsum;

    return iDiff;
}

int main()
{
    int iSize = 0 ,iRet = 0 ,iCnt = 0;
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

    iRet = Diffrence(p ,iSize);

    printf("Result is :%d",iRet);

    free(p);

    return 0;
}