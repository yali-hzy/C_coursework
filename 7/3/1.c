#include<stdio.h>
#include<string.h>
void fun(char *a,char *b,char *c);
void main()
{
	char a[10]="aBCDefgH",b[10]="ABcd",c[80]={'\0'};
	fun(a,b,c);
	printf("%s",c);
}
void fun(char *a,char *b,char *c)
{
	int k=0;
	while(*a || *b)
	{
		if(*a<*b)
			c[k]=*b;
		else
			c[k]=*a;
		if(*a)
			a++;
		if(*b)
			b++;
		k++;
	}
}
