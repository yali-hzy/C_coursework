#include<stdio.h>
void mySort(int **a,int n)
{
	int tmp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			if(*a[j]<*a[i])
			{
				tmp=*a[j];
				*a[j]=*a[i];
				*a[i]=tmp;
			}
	}
}
int main()
{
	int n,i,a[110],*pa[110];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		pa[i]=&a[i];
	}
	mySort(pa,n);
	for(i=0;i<n;i++)
		printf("%d ",*pa[i]);
	return 0;
}
