#include<stdio.h>

int main()
{
	int i,pa,pb,a,b,sum;

	pa=8;
	pb=1;
	sum=pa;
	for(i=2;i<=10;i++)
	{
		b=pb+3;
		a=pa+b;
		sum+=a;

		pa=a;
		pb=b;
	}

	printf("The sum is %d\n",sum);
	return 0;
}
