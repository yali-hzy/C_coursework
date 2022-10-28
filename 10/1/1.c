#include<stdio.h>
#define POWER(x) ((x)*(x))
int main()
{
	int i = 2;
	while(i <= 5)
	printf("%d   ",POWER(i++));
	return 0;
}
