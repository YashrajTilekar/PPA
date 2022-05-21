/*
Accept Number from user and display Multiplication of factors

input : 12
output : 144 (1 * 2 * 3 * 4 * 6)
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if( (iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factors is : %d",iRet);

    return 0;
}