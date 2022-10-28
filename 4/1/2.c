#include<stdio.h>
void func()
{
	static int a=0;
	register int b=0;
	auto int c=0;
	printf("a=%d\tb=%d\tc=%d\n",a++,b++,c++);
}
int main()
{
	func();
	func();
	func();
	return 0;
}
