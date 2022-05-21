#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[30];
    int fd = 0 ,ret = 0;
    char Data[11] ;

    printf("Enter the file name you want to open \n");
    scanf("%s",fName);

    fd = open(fName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with fd :%d\n",fd);
    }

    read(fd ,Data ,6);                  //write(kashyat kara ,kay kara ,kiti size kara
    
    printf("Data from file is :%s\n",Data);
    close(fd);

    return 0;
}