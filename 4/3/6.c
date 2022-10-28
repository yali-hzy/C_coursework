#include<stdio.h>
void sort(int *a,int n,int p)
{
	int tmp,i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<n;j++)
			if((p==1 && a[j]<a[j+1]) || (p!=1 && a[j]>a[j+1]))
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}
int main()
{
	int i,j,n,p,a[20];
	puts("Please input n and the parameter.");
	scanf("%d%d",&n,&p);
	puts("Pleasr input the n number(s).");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a,n,p);
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
