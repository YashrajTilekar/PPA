#include<stdio.h>

int main()
{
    auto int marks=0;

    printf("Enter your Marks\n");
    scanf("%d",&marks);

    printf("Your Entered Marks:%d\n",marks);

    if(marks > 60)
    {
        printf("First Class");
    }

    else
    {
        printf("Not First Class");
    }
    


    return 0;
}