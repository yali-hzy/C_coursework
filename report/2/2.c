#include<stdio.h>
int my_strlen(char *s)
{
	int len=0;
	for(;*s;s++)
		len++;
	return len;
}
void my_strcpy(char *a,char *b)
{
	for(;*a=*b;a++,b++);
}
void my_strcat(char *a,char *b)
{
	for(;*a;a++);
	for(;*a=*b;a++,b++);
}
int main()
{
	char s[110]="123",s1[110],s2[110]="abc";
	printf("s_len = %d\n",my_strlen(s));
	my_strcpy(s1,s);
	printf("s1 = %s\n",s1);
	my_strcat(s,s2);
	printf("%s\n",s);
	return 0;
}
