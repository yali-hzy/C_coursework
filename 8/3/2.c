#include<stdio.h>
const int N=3;
struct Employee
{
	char id[30],name[30],posi[30];
	int year,wage;
};
int main()
{
	struct Employee staff[N];
	int i,sum=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%s%d%s%d",staff[i].id,staff[i].name,&staff[i].year,staff[i].posi,&staff[i].wage);
	for(i=0;i<n;i++)
		sum+=staff[i].wage;
	printf("%d %lf\n",sum,sum*1./N);
	return 0;
}
