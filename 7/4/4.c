#include<stdio.h>
#include<string.h>
int main()
{
	int len,a[110],*p,*q,n=0,ans[110],i,r,isNegative=0;
	char s[110],strans[110]={'\0'};
	scanf("%s",s);
	len = strlen(s);
	if(s[0]=='-')
		isNegative=1;
	for(i=isNegative;i<len;i++)
		a[i]=s[i]-48;
	a[len]=-1;
	p=a+isNegative;
	while(!(*p))
		p++;
	if(*p==-1)
	{
		puts("0");
		return 0;
	}
	while(*p)
	{
		r=0;
		for(q=p;(*q)>=0;q++)
			r=(r*8+(*q))%10;
		ans[++n]=r;
		while(*p<10 && *(p+1)>=0)
		{
			*(p+1)+=(*p)*8;
			p++;
		}
		for(q=p;(*q)>=0;q++)
		{
			if(*(q+1)>=0)
				*(q+1)+=(*q)%10*8;
			*q/=10;
		}
	}
	if(isNegative)
		strans[0]='-';
	for(i=n;i>=1;i--)
		strans[n-i+isNegative]=ans[i]+48;
	printf("%s",strans);
	return 0;
}
