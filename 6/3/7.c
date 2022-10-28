#include<stdio.h>
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int (*fun)(int,int);
	int a,b,op;

	scanf("%d%d",&a,&b);
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			fun=max;
			break;
		case 2:
			fun=min;
			break;
	}

	printf("%d\n",fun(a,b));
	return 0;
}
