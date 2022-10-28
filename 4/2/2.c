#include<stdio.h>
#include<math.h>
double f(double);
double integral(double,double);
int main()
{
	printf("%f\n",integral(0.0,10.0);
	return 0;
}
double f(double x)
{
	return ;
}
double integral(double a,double b)
{
	double s,x,h;
	int n=100,i;
	h=fabs(a-b)/n;
	s=(f(a)+f(b))/2.0;
	for(i=1;i<=n-1;i++)
	{
		x=a+i*h;
		s=s+f(x);
	}
	s=s*h;
	return s;
}

