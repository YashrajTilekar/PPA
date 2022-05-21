#include<stdio.h>

int main()
{
    int no=11;
    char ch='A';

    printf("value of no: %d \n", no);
    printf("value of ch: %c\n", ch);

    printf("address of no:%u \n", &no);
    printf("address of ch:%u \n", &ch);

    printf("size of no is :%d\n",sizeof(no));
    printf("size of ch is :%d\n",sizeof(ch));

    return 0;
}