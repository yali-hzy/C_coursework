#include<stdio.h>
#include<string.h>

int init(char word[][30],int *len)
{
	char s[610]={'\0'},*cur,*s1;
	int n=0;
	gets(s);
	s1=s;
	while(*s1)
	{
		if(*s1>='a' && *s1<='z' || *s1>='A' && *s1<='Z')
		{
			cur=word[++n];
			len[n]=0;
			do
			{
				*cur++=*s1++;
				len[n]++;
			}
			while(*s1>='a' && *s1<='z' || *s1>='A' && *s1<='Z');
			*cur='\0';
		}
		s1++;
	}
	return n;
}
void mysort(char word[][30],int *len,int n)
{
	int i,j,minline,mxlen,temp;
	char *minstr,tmp;
	for(i=1;i<n;i++)
	{
		minline=i;
		for(j=i+1;j<=n;j++)
			if(len[minline]>len[j])
				minline=j;
		minstr=word[minline];
		mxlen=len[i]>len[minline]?len[i]:len[minline];
		for(j=0;j<=mxlen;j++)
		{
			tmp=word[i][j];
			word[i][j]=minstr[j];
			minstr[j]=tmp;
		}
		temp=len[i];
		len[i]=len[minline];
		len[minline]=temp;
	}
}
void strcatall(char *ans,char word[][30],int n)
{
	int i;
	for(i=1;i<=n;i++)
		strcat(ans,word[i]);
	printf("%s",ans);
}
int main()
{
	char word[20][30],ans[610]={'\0'};
	int len[20];
	int n=init(word,len);
	mysort(word,len,n);
	strcatall(ans,word,n);
	return 0;
}
