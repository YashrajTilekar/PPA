/*
Accept Number from user and retur Multiplication of all digits

input : 2395
output : 270

*/
#include<stdio.h>

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;

        iNo = iNo/10;
    }

    return iMult;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of all Digits in %d is :%d",iValue,iRet);

    return 0;
}