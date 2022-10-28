#include<stdio.h>
const int inf=(-1u)>>1;
int a[110][110];
int main()
{
	int n,i,j,maxval=-inf,row=0,column=0;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input n * n integer(s) a_ij.");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]>maxval)
			{
				maxval=a[i][j];
				row=i;
				column=j;
			}

	printf("The maximum value is %d.\nOne of its position is (row=%d, column=%d).\n",maxval,row,column);
	return 0;
}
