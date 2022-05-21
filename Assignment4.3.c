/*
Accept Number from user and display its Non-factors 

input : 12
output : 5  7   8   9   10  11
*/

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        if( (iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}