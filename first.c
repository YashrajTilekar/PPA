#include<stdio.h>

extern int n1;
extern int n2;
int main()
{
	auto int add=0;
	add=n1+n2;
	printf("sum is, %d",add);

	return 0;
}