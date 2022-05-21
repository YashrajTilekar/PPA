/*
Accept one number and display that number of even number on screen 
*/
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 1;

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        if( (iCnt % 2) == 0)
        {
            printf("%d ",iCnt);
            iCnt++;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}