/*
Accept Number from user and return Difference between, Summation of its Factors and Non-factors 

input : 12
output : -34    (16 - 50)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0 ,iDiff = 0 ,iFSum = 0 ,iNfSum = 0;

    for(iCnt = 1 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if( (iNo % iCnt) == 0)
        {
            iFSum = iFSum + iCnt;
        }
    }

    iCnt = 0;

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            iNfSum = iNfSum + iCnt;
        }
    }

    iDiff = iFSum - iNfSum;

    return iDiff;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between, Summation of its Factors and Non-factors is : %d",iRet);

    return 0;
}