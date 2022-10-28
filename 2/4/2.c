#include<stdio.h>
int fun1(int i,int j)
{
	return ++i-j--;
}
int fun2(int i,int j)
{
	return i=i*=j;
}
int fun3(int i,int j)
{
	return i=3/2*(j=3-2);
}
int fun4(int i,int j)
{
	return ~i^j;
}
int fun5(int i,int j)
{
	return i & j | 1;
}
int fun6(int i,int j)
{
	return i+i & 0xff;
}
int main()
{
	int i = 10, j = 5;
	printf("fun1=%d\n",fun1(i,j));
	printf("fun2=%d\n",fun2(i,j));
	printf("fun3=%d\n",fun3(i,j));
	printf("fun4=%d\n",fun4(i,j));
	printf("fun5=%d\n",fun5(i,j));
	printf("fun6=%d\n",fun6(i,j));
	return 0;
}
