#include<stdio.h>

int main()
{
	int no1=10;
	
	int const no2=10;
	
	no1++;             //allowed
	//no2++;             //not allowed

	printf("%d",no2);
	
	return 0;
}