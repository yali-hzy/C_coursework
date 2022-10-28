#include<stdio.h>
int main()
{
	unsigned short x = 015,y = 0x2b;
	printf("x|y=%hu\nx^y=%hu\nx&y=%hu\n~x+~y=%hu\nx<<3=%hu\ny>>4=%hu\n",x|y,x^y,x&y,~x + ~y,x<<3,y<<3);
	return 0;
}
