#include<stdio.h>
#include<string.h>

int main()
{
    char arr[5]={'a','b','c','d','\0'}; //First way

    char brr[5]="abcd";                 //Second way

    printf("%s\n",arr);
    printf("%s\n",brr);

    printf("%c\n",arr[0]);
    printf("%c\n",arr[1]);
    printf("%c\n",arr[2]);
    printf("%c\n",arr[3]);

    printf("Size of arr is: %d\n",sizeof(arr));
    printf("Size of brr is: %d\n",sizeof(brr));

    printf("Length of arr is: %d\n",strlen(arr));
    printf("Length of brr is: %d\n",strlen(brr));


    return 0;
}