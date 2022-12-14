#include <stdio.h>
#include <string.h>
const int N = 10;
char toCapital(char c)
{
	return c-32*(c>='a' && c<='z');
}
int cmp(char *a, char *b)
{
	for(; *a && *b && toCapital(*a) == toCapital(*b); a++, b++);
	return toCapital(*a) > toCapital(*b);
}
void in(char s[][110], int *opt, int n)
{
	int i;
	for(i = 1; i <= n; i++)
		scanf("%s", s[i]);
	scanf("%d", opt);
}
void selectionSort(char s[][110], int opt, int n)
{
	int i, j, ilen, mlen, len;
	char *minstr, tmp;
	for(i = 1; i < n; i++)
	{
		minstr = s[i];
		for(j = i + 1; j <= n; j++)
			if((opt && cmp(minstr, s[j])) || (!opt && strcmp(minstr, s[j])>0))
				minstr = s[j];
		ilen = strlen(s[i]);
		mlen = strlen(minstr);
		len = ilen > mlen ? ilen : mlen;
		for(j = 0; j <= len; j++)
		{
			tmp = s[i][j];
			s[i][j] = minstr[j];
			minstr[j] = tmp;
		}
	}
}
void out(char s[][110], int n)
{
	int i;
	for(i = 1; i <= n; i++)
		printf("%s\n", s[i]);
}
int main()
{
	int opt;
	char s[N+10][110];
	in(s, &opt, N);
	selectionSort(s, opt, N);
	out(s, N);
	return 0;
}
/*
abc 
AB
a
A
dghf
asjhas
asjhf
ASHDFjdf
sjhd
ashf
1
*/
