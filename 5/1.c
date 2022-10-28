#include<stdio.h>
int main()
{
	int n,a[110],cnt_positive=0,cnt_zero=0,cnt_negative=0,i;
	puts("Please input n.");
	scanf("%d",&n);
	puts("Please input n integer(s) a_i.");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if(a[i]>0)
			cnt_positive++;
		else
			if(a[i]==0)
				cnt_zero++;
			else
				cnt_negative++;
	}
	printf("There is/are %d positive number(s).\n",cnt_positive);
	printf("There is/are %d zero(s).\n",cnt_zero);
	printf("There is/are %d negative number(s).\n",cnt_negative);
	return 0;
}
