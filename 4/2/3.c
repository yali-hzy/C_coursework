#include<stdio.h>
double fac(int);
int main()
{
	int r,k;
	double C;
	printf("Enter r,k:");
	scanf("%d%d",&r,&k);
	C=fac(r)/fac(r-k)/fac(k);
	printf("C=%f\n\n",C);
	return 0;
}
double fac(int n)
{
	int i;
	double f=1.;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}
