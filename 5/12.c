#include<stdio.h>
const int inf=(-1u)>>1;
int a[110][110],b[110];
int main()
{
	int n,i,j;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input n * n integer(s).");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=1;i<=n;i++)
	{
		int MaxInRow=-inf;
		for(j=1;j<=n;j++)
			if(a[i][j]>MaxInRow)
				MaxInRow=a[i][j];
		printf("The maximum in row %d is %d\n",i,MaxInRow);
		b[i]=MaxInRow;
	}
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(b[i]>b[j])
			{
				int tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
	puts("The array b is:");
	for(i=1;i<=n;i++)
		printf("%d ",b[i]);
	return 0;
}
