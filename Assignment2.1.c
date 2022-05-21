//Accept one number and print number of * on screen

#include<stdio.h>

void Display(int iNo1)
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

    Display(iValue);

    return 0;
}