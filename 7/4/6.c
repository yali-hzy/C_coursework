#include<stdio.h>
char *mystrcat(char *a, char *b)
{
	char *tmp = a;
	while(*a)
		a++;
	while(*b)
		*a++=*b++;
	return tmp;
}
int main()
{
	char a[110]={'\0'},b[110]={'\0'};
	scanf("%s%s",a,b);
	mystrcat(a,b);
	printf("%s",a);
	return 0;
}
