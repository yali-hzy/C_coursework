#define DEBUG
#include<stdio.h>
int main()
{
	int a = 14,b = 15, c;

	#ifndef DEBUG
	a = 10;
	b = 4 * a;
	printf("a = %d, b = %d, ",a , b);
	#endif

	c = b/a;
	printf("c = %d ",c);
	return 0;
}
