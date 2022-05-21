#include<stdio.h>

//0 to 10    Rs 100
//10 to 40    Rs 500
//40 and greater    Rs 300

int main()
{
    auto int iAge=0;

    printf("Enter Your Age\n");
    scanf("%d",&iAge);

    if((iAge>=0)&&(iAge<=10))
    {
        printf("Your Amount is:100");
    }

    else if((iAge>10)&&(iAge<=40))
    {
        printf("Your Amount is:500");
    }

    else if(iAge>40)
    {
        printf("Your Amount is:300");
    }

    return 0;
}