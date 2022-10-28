#include<stdio.h>
int main()
{
	int b = 5;
	int y = 3;

	#define b 2
	#define f(x) b*(x)
	printf("%d, ",f(y+3));
	#undef b
	printf("%d, ",f(y+3));
	#define b 3
	printf("%d, ",f(y+3));
	return 0;
}
