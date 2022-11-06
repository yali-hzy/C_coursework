#include<stdio.h>
void work(char *s,int p,char *s1,char *ans)
{
	int i;
	for(i=0;i<p && (*s);i++,s++)
	{
		*ans=*s;
		ans++;
	}
	if(i<p)
		return;
	for(;*s1;s1++)
	{
		(*ans)=*s1;
		ans++;
	}
	for(;(*s);s++)
	{
		*ans=*s;
		ans++;
	}
}
int main()
{
	char s[110],s1[110],ans[110]={'\0'};
	int p;
	scanf("%s%d%s",s,&p,s1);
	work(s,p,s1,ans);
	printf("%s",ans);
	return 0;
}
