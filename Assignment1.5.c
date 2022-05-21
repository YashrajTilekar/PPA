#include<stdio.h>

void Accept(int iNo1)
{
    int iCnt = 0;

    for(iCnt = 0 ;iCnt <= iNo1 ;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number\n");
    scanf("%d" ,&iValue);

    Accept(iValue);

    return 0;
}