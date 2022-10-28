#include<stdio.h>
int main()
{
	int n,a[110],sum=0,i;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input n integer(s) a_i.");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		sum+=a[i];
	printf("The sum is %d\n",sum);
	return 0;
}
