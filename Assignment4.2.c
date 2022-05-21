/*
Accept Number from user and display its factors in Decreasing order

input : 12
output : 6   4   3   2   1
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2) ;iCnt > 0 ;iCnt--)
    {
        if( (iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}