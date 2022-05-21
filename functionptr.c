#include<stdio.h>

int add(int n1,int n2)
{
    int ans=0;
    ans=n1+n2;
    return ans;
}

int main()
{
    int a=10;
    int b=20;

    printf("Addition is %d\n",add(a,b));  //called directly

    int (*fptr)(int,int);
    fptr=add;
    printf("Addition is %d\n",fptr(a,b)); //called indirectly through pointer
    printf("%d\n",fptr);

    return 0;
}