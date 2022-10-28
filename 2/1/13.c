#include<stdio.h>
int x,a,b;
int main()
{
	x=(a=3,b=a--);
	printf("%d %d %d\n",x,a,b);
	return 0;
}
