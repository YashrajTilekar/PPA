/*
Accept Number from user and Check whether it contains 0 int it or not

input : 2395
output : There is No Zero

input : 1018
output : It contains Zero

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
            break;
        }

        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0 ;
    BOOL bRet = FALSE;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is No Zero\n");
    }

    return 0;
}