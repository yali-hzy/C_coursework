#include<stdio.h>
int main()
{
	int sum,i;

	for(sum=0,i=1;i<=10;i++)
	{
		sum=i+sum;
	}
	printf("%d",sum);
	return 0;
}
