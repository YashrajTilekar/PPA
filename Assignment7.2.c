/*
Accept Number from user and count frequency of ODD digits 

input : 2395
output : 3

*/
#include<stdio.h>

int CountOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( (iDigit % 2) != 0)
        {
            iFreq++;            
        }

        iNo = iNo/10;
    }

    return iFreq;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Frequency of Odd Digits in %d is :%d",iValue,iRet);

    return 0;
}