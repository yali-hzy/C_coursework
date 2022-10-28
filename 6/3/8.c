#include<stdio.h>

void getAvgScore1(int a[][6],int n)
{
	int (*p)[6]=a+1,sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=*(*p+1);
		p++;
	}
	printf("Average score of Subject 1 = %lf\n",sum*1./n);
}

void getBadStudent(int a[][6],int n,int m)
{
	int cnt,i,j,sum;
	for(i=1;i<=n;i++)
	{
		cnt=0;
		for(j=1;j<=m;j++)
			if(a[i][j]<60)
				cnt++;
		if(cnt>=2)
		{
			printf("%d",i);
			sum=0;
			for(j=1;j<=n;j++)
			{
				sum+=a[i][j];
				printf(" %d",a[i][j]);
			}
			printf("%.2lf\n",sum*1./m);
		}
	}
}

void getGoodStudent(int a[][6],int n,int m)
{
	int i,j,sum,flag;
	for(i=1;i<=n;i++)
	{
		sum=0;
		flag=1;
		for(j=1;j<=m;j++)
		{
			sum+=a[i][j];
			if(a[i][j]<=85)
				flag=0;
		}
		if(flag || sum*1./m>90)
			printf("%d\n",i);
	}
}

int main()
{
	int i,j,a[5][6];
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++)
			scanf("%d",&a[i][j]);
	
	getAvgScore1(a,4);
	getBadStudent(a,4,5);
	getGoodStudent(a,4,5);

	return 0;
}
