#include<stdio.h>
int a[110];
int main()
{
	int n,i,*p,m;
	puts("Please input n and m.");
	scanf("%d%d",&n,&m);
	puts("Please input n number(s).");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	puts("Answer:");
	for(p=a+n-m;p<a+n;p++)
		printf("%d ",*p);
	for(p=a;p<a+n-m;p++)
		printf("%d ",*p);
	return 0;
}
