#include<stdio.h>
void main(void)
{
	int x, * p;
	x = 10;
	p = &x; /*here*/
	printf("%d\n", * p);
}
