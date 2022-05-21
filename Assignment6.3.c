/*
Accept Number from user and count frequency of 2 int it

input : 2395
output : 1

*/
#include<stdio.h>

int CountTwo(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("Frequency of 2 in %d is :%d",iValue,iRet);

    return 0;
}