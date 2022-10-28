#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x1,x2;
	float x3,x4;
	printf("input the numbers: a ,b ,c");
	scanf("%f%f%f",&a,&b,&c);
	if(fabs(a)<1e-6)
	{
		printf("the input is error\n");
		return 0;
	}
	if( b*b > 4*a*c)
	{
		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.2f,x2=%.2f",x1,x2);
	}
	else if (fabs(b*b-4*a*c)<1e-6)
	{
		x1 = x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.2f",x1);
	}
	else
	{
		x3 = -b/(2*a);
		x4 = sqrt(4*a*c- b*b)/(2*a);
		printf("x1=%.2f+%.2f i\n",x3,x4);
		printf("x2=%.2f-%.2f i\n",x3,x4);
	}
	return 0;
}
