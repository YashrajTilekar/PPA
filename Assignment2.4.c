///////////////////////////////////////////////////////////////////////////////////////
//Accept two Numbers from user and display first number in second number of times
//Input : 12  5
//Output :12  12  12  12  12
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d " , iNo);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////