#include<stdio.h>
int main()
{
	int t=1,i=5;
	t*=(i++)+(--i);
	printf("%d",t);
	return 0;
}
