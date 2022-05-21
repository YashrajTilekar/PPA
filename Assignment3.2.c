/*
Accept one number from user and print even factors
*/

#include<stdio.h>

void DispayFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int i = 0;
    for(i = 1 ;i <= (iNo/2) ;i++)
    {
        if( ((iNo % i ) == 0) && ((i % 2) == 0))
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DispayFactor(iValue);

    return 0;
}