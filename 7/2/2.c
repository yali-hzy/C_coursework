#include<stdio.h>
#include<string.h>
void fun(char *s,char *t);
void main()
{
	char S[100],T[100];
	printf("\nPlease enter string S:");
	scanf("%s",S);
	fun(S,T);
	printf("\nThe result is:%s\n",T);
}
void fun(char *s,char *t)
{
	int i,d;
	d=strlen(s);
	for(i=0;i<d;i++)
		t[i]=s[i];
	for(i=0;i<d;i++)
		t[i+d]=s[d-i-1];
	t[d*2]='\0';
}
