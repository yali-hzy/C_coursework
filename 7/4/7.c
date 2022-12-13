/*
可处理超过 int 型的正整数
可处理含 一个符号 和 多个前导0 的数
*/
#include <stdio.h>
#include <string.h>
const int N = 10;
int cmp(char *a, char *b)
{
	int alen = strlen(a), blen = strlen(b), astart = 0, bstart = 0, m, anegative =0, bnegative = 0;
	if(a[astart] == '+')
        astart++;
    else
        if(a[astart] == '-')
        {
            anegative = 1;
            astart++;
        }
    if(b[astart] == '+')
        bstart++;
    else
        if(b[bstart] == '-')
        {
            bnegative = 1;
            bstart++;
        }
   	if(anegative != bnegative)
        return anegative < bnegative;
	for(;astart < alen - 1 && a[astart] == '0'; astart++);
	for(;bstart < blen - 1 && b[bstart] == '0'; bstart++);
	m = (alen - astart) - (blen - bstart);
	if(m)
	{
		if(m > 0)
			return (1^anegative);
		else
			return (0^anegative);
	}
	a += astart;
	b += bstart;
	for(; *a && *b; a++, b++)
	{
		if(*a > *b)
			return (1^anegative);
		if(*a < *b)
			return (0^anegative);
	}
	return 0;
}
int main()
{
	int i, j, opt, ilen, mlen, len;
	char s[N+10][110], *minstr, tmp;
	for(i = 1; i <= N; i++)
		scanf("%s", s[i]);
	scanf("%d", &opt);
	for(i = 1; i < N; i++)
	{
		minstr = s[i];
		for(j = i + 1; j <= N; j++)
			if((!opt && cmp(minstr, s[j])) || (opt && strcmp(minstr, s[j])>0))
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
	for(i = 1; i <= 10; i++)
		printf("%s\n", s[i]);
	return 0;
}

