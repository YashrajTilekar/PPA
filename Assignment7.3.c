/*
Accept Number from user and count frequency of digits in between 3 & 7 

input : 2395
output : 1

*/
#include<stdio.h>

int CountRange(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( (iDigit > 3) && (iDigit < 7) )
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

    iRet = CountRange(iValue);
    printf("Frequency of Digits Between 3 and 7 in %d is :%d",iValue,iRet);

    return 0;
}