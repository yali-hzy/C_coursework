#include<stdio.h>
int a[110][110];
int main()
{
	int n,sum=0,i,j;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input the det.");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=1;i<=n;i++)
		sum+=a[i][i];
	
	printf("sum = %d\n",sum);
	return 0;
}
