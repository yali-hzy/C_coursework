#include<stdio.h>
#define LEAPYEAR(x) (((x)%4==0 && (x)%100!=0) || (x)%400==0)
int main()
{
	int x;
	puts("Please input year x.");
	scanf("%d",&x);
	if(LEAPYEAR(x))
		puts("It is a leap year.");
	else
		puts("It is not a leap year.");
	return 0;
}
