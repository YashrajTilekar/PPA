#include<stdio.h>

//1   8
//2   9
//3   10
//4   11
//5   12

int main()
{
    auto int iStd=0;

    printf("Enter Your Standard\n");
    scanf("%d",&iStd);

    switch(iStd)
    {
        case 1:
        printf("Your Exam is at 8AM\n");
        break;

        case 2:
        printf("Your Exam is at 9AM\n");
        break;

        case 3:
        printf("Your Exam is at 10AM\n");
        break;

        case 4:
        printf("Your Exam is at 11AM\n");
        break;

        case 5:
        printf("Your Exam is at 12 noon\n");
        break;

        default:
        printf("Invalid Standard\n");
    }

    return 0;
}