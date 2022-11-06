#include<stdio.h>

int main()
{
	long int s=1,i;
	for(i=1;i<=10;i++)
	{
		s*=i;
		printf("%2ld! = %ld\n",i,s);
	}
	return 0;
}
