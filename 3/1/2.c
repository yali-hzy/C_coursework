#include<stdio.h>
int main()
{
	int i,j,p,s;
	s=0;
	for(i=1;i<=4;i++)
	{
		p=1;
		for(j=1;j<=4;j++)
			p=p*j;
		s=s+p;
	}
	printf("s=%d\n",s);
	return 0;
}
