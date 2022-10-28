#include<stdio.h>
const int inf=(-1u)>>1;
int a[110][110],MaxInRow[110],MinInColumn[110];
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
		MaxInRow[i]=-inf;
		MinInColumn[i]=inf;
	}

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>MaxInRow[i])
				MaxInRow[i]=a[i][j];
			if(a[i][j]<MinInColumn[j])
				MinInColumn[j]=a[i][j];
		}
	
	int flag=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==MaxInRow[i] && a[i][j]==MinInColumn[j])
			{
				printf("%d at (row = %d, column = %d)\n",a[i][j],i,j);
				flag=1;
			}
	if(!flag)
		puts("No solution!");
	return 0;
}
