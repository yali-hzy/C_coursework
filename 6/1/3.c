#include<stdio.h>
main()
{
	int a,b,k=4,m=6,*p=&k,*q=&m;
	a=p==&m;
	b=(*p)/(*q)+7;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}
