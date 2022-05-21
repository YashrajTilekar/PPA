/*
Accept Number from user and return Summation of its Non-factors 

input : 12
output : 50
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0 ,iSum =0;

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of Non-Factors is : %d",iRet);

    return 0;
}