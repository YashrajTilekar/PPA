#include<stdio.h>



int Addition(int in1,int in2)
{
    auto int ians=0;

    ians=in1+in2;
    return ians; 
}


int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iRet=0;

    printf("Enter First number\n");
    scanf("%d",&iValue1);

    printf("Enter Second number\n");
    scanf("%d",&iValue2);

    iRet=Addition(iValue1,iValue2);

    printf("Addition is:%d\n",iRet);

    return 0;
}