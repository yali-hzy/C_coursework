#include <stdio.h>
int n = 1;
void func()
{
	static int x=4;
	int y=10;
	x=x+2;
	n=n+10;
	y=y+n;
	printf("func:x=%d,y=%d,n=%d\n",x,y,n);
}
int main()
{
	static int x = 5;
	int y;
	
	y = n;
	printf("main:x=%d,y=%d,n=%d\n",x,y,n);
	func();
	printf("main:x=%d,y=%d,n=%d\n",x,y,n);
	func();
	return 0;
}
