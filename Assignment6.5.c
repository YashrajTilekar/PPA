/*
Accept Number from user and count frequency of digits which are less than 6

input : 2395
output : 3

*/
#include<stdio.h>

int CountFreq(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountFreq(iValue);
    printf("Frequency of Digits Less than 6 in %d is :%d",iValue,iRet);

    return 0;
}