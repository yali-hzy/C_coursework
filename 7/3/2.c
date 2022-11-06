#include<conio.h>
#include<stdio.h>
#include<string.h>
void fun(char *str, char ch);
void main()
{
	char s[81],c;
	printf("\nPlease enter a string:\n");
	gets(s);
	printf("\nPlease enter the character to search:");
	c=getchar();
	fun(s,c);
	printf("\nThe result is %s\n",s);
}
void fun(char *str,char ch)
{
	while(*str&&*str!=ch)
		str++;
	if(*str!=ch)
	{
		str[0]=ch;
		str[1]='\0';
	}
}
