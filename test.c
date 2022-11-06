#include<stdio.h>
#include<math.h>
int main()
{
	int x=2,i,n;
	double sum=0;
	int f1,f2;
	printf("%.8lf\n",exp(x));
	for(n=0;n<=25;n++)
	{
		f1=1,f2=1;
		for(i=1;i<=n;i++)
		{
			f1*=x;
			f2*=i;
		}
		sum+=f1*1./f2;
	}
	printf("%.8lf",sum);
	return 0;
}
