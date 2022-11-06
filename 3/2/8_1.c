#include<stdio.h>

int main()
{
	int a,b,c,d,e,x;
    puts("Please input a positive integer x which is less than 5 digits in decimal.");
	scanf("%d",&x);
	a=x%10;
	b=x%100/10;
	c=x%1000/100;
	d=x%10000/1000;
	e=x/10000;
	if(e)
	{
		printf("x has 5 digits.\n");
		printf("Each digit is:\n");
		printf("%d %d %d %d %d\n",e,d,c,b,a);
		printf("Reverse Order:\n");
		printf("%d%d%d%d%d\n",a,b,c,d,e);
		return 0;
	}
	if(d)
	{
		printf("x has 4 digits.\n");
		printf("Each digit is:\n");
		printf("%d %d %d %d\n",d,c,b,a);
		printf("Reverse Order:\n");
		printf("%d%d%d%d\n",a,b,c,d);
		return 0;
	}
	if(c)
	{
		printf("x has 3 digits.\n");
		printf("Each digit is:\n");
		printf("%d %d %d\n",c,b,a);
		printf("Reverse Order:\n");
		printf("%d%d%d\n",a,b,c);
		return 0;
	}
	if(b)
	{
		printf("x has 2 digits.\n");
		printf("Each digit is:\n");
		printf("%d %d\n",b,a);
		printf("Reverse Order:\n");
		printf("%d%d\n",a,b);
		return 0;
	}
	printf("x has 1 digit.\n");
	printf("Each digit is:\n");
	printf("%d\n",a);
	printf("Reverse Order:\n");
	printf("%d\n",a);
	return 0;
}
