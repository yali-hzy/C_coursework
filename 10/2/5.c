#include<stdio.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp
int arraya[110],arrayb[110];
int main()
{
	int tmp,n,i;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input arraya.");
	for(i=1;i<=n;i++)
		scanf("%d",&arraya[i]);
	puts("Please input arrayb.");
	for(i=1;i<=n;i++)
		scanf("%d",&arrayb[i]);

	for(i=1;i<=n;i++)
	{
		SWAP(arraya[i],arrayb[i]);
	}

	puts("arraya:");
	for(i=1;i<=n;i++)
		printf("%d ",arraya[i]);
	puts("");
	puts("arrayb:");
	for(i=1;i<=n;i++)
		printf("%d ",arrayb[i]);
	puts("");
	return 0;
}
