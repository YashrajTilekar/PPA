/*
Accept Number from user and return Difference Between, 
Summation of Even Digits and Summation of Odd digits

input : 2395
output : -15 (2 -17)

*/
#include<stdio.h>

int CountDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iESum = 0 ,iOSum = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if( (iDigit % 2) == 0)      
        {
            iESum = iESum + iDigit;
        }
        else
        {
            iOSum = iOSum + iDigit;
        }

        iNo = iNo/10;
    }

    iDiff = iESum - iOSum;

    return iDiff;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference is :%d",iRet);

    return 0;
}