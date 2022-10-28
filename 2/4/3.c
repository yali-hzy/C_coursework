#include<stdio.h>
int fun1(int a,int b)
{
	return !a&&b++;
}
int fun2(int a,int b)
{
	return a||b+4&&a*b;
}
int fun3(int a,int b)
{
	return a=1,b=2,(a>b)?++a:++b;
}
int fun4(int a,int b)
{
	return ++b,a=10,a+5;
}
int fun5(int a,int b)
{
	return a+=b%=a+b;
}
int fun6(int a,int b)
{
	return a!=b>2<=a+1;
}
int main()
{
	int a = 5, b = 3;
	printf("fun1=%d\n",fun1(a,b));
	printf("fun2=%d\n",fun2(a,b));
	printf("fun3=%d\n",fun3(a,b));
	printf("fun4=%d\n",fun4(a,b));
	printf("fun5=%d\n",fun5(a,b));
	printf("fun6=%d\n",fun6(a,b));
	return 0;
}
