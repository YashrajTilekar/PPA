#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iNo)
{
    if( (iNo % 5) == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter Number");
    scanf("%d",&iValue);

    bret = Check(iValue);

    if( bret == TRUE )
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is NOT Divisible by 5");
    }

    return 0;
}