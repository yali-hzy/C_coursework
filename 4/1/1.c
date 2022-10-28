#include<stdio.h>
void func();
int a;
void func()
{
	printf("no 1 a=%d",a);
}
int main()
{
	int a=1;
	printf("no 1 a=%d",a);
	func();
	{
		int a=1;
		printf("no 1 a=%d",a);
		func();
	}
	return 0;
}
