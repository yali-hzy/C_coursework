#include<stdio.h>
void Count(char *s,int *lc,int *nc,int *sc,int *oc);
int main()
{
	char s[110]={'\0'};
	int Letter_Count=0, Number_Count=0, Space_Count=0, Other_Count=0;
	gets(s);
	Count(s, &Letter_Count, &Number_Count, &Space_Count, &Other_Count);
	printf("Letter Count = %d\nNumber Count = %d\nSpace Count = %d\nOthers = %d\n", Letter_Count, Number_Count, Space_Count, Other_Count);
	return 0;
}
void Count(char *s,int *lc,int *nc,int *sc,int *oc)
{
	for(;*s;s++)
	{
		if((*s>='a' && *s<='z') || (*s>='A' && *s<='Z'))
			(*lc)++;
		else
			if(*s>='0' && *s<='9')
				(*nc)++;
			else
				if(*s==' ')
					(*sc)++;
				else
					(*oc)++;
	}
}
