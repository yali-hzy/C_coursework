#include<stdio.h>
int a[110],b[110],c[110],sum[110],id[110];
double avg[110];
void swap_int(int* a,int* b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void swap_double(double* a,double* b)
{
	double c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int n,i,j;
	puts("Please input N.");
	scanf("%d",&n);
	puts("Please input 3 scores of each student.");
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		sum[i]=a[i]+b[i]+c[i];
		avg[i]=sum[i]*1./3;
		id[i]=i;
	}

	for(i=1;i<=n;i++)
		printf("The average score of Student %d is %.2lf\n",id[i],avg[i]);
	
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(sum[i]<sum[j] || (sum[i]==sum[j] && id[i]>id[j]))
			{
				swap_int(&a[i],&a[j]);
				swap_int(&b[i],&b[j]);
				swap_int(&c[i],&c[j]);
				swap_int(&sum[i],&sum[j]);
				swap_double(&avg[i],&avg[j]);
				swap_int(&id[i],&id[j]);
			}
	
	int rnk=1;
	for(i=1;i<=n;i++)
	{
		if(sum[i]!=sum[i-1])
			rnk=i;
		printf("Rank %d: Student %d, Average score = %.2lf\n",rnk,id[i],avg[i]);
	}
	return 0;
}
