#include<stdio.h>
double odd(int n)
{
	int i;
	double sum=0;
	for(i=1;i<=n;i+=2)
		sum+=1./i;
	return sum;
}
double even(int n)
{
	int i;
	double sum=0;
	for(i=2;i<=n;i+=2)
		sum+=1./i;
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	double (*calc)(int n);
	if(n&1)
		calc=odd;
	else
		calc=even;
	printf("%lf",calc(n));
	return 0;
}
