/*
高精度进制转换
可以处理超过 int 型范围的数字
可处理带有 一个'-' 和 多个前导0 的情况
思路：除 10 取余倒读数
*/
#include <stdio.h>
#include <string.h>

int main()
{
	int len, a[110], *p, *q, n = 0, ans[110], i, r;
	char symbol = '\0';
	char s[110], strans[110]={'\0'};
	scanf("%s", s);
	len = strlen(s);
	if(s[0] == '-' || s[0] == '+')
		symbol = s[0];
	for(i = (symbol != '\0'); i < len; i++)
		a[i] = s[i] - '0';
	a[len] = -1;
	p = a + (symbol != '\0');
	while(!(*p))
		p++;
	if(*p == -1)
	{
		puts("0");
		return 0;
	}
    
	while(*p)
	{
		r = 0;
		for(q = p; (*q) >= 0; q++)
			r = (r * 8 + (*q)) % 10;
		ans[++n] = r;
		while(*p < 10 && *(p+1) >= 0)
		{
			*(p + 1) += (*p) * 8;
			p++;
		}
		for(q = p; (*q) >= 0; q++)
		{
			if(*(q + 1) >= 0)
				*(q + 1) += (*q) % 10 * 8;
			*q /= 10;
		}
	}
    
	if(symbol)
		strans[0] = symbol;
	for(i = n; i >= 1; i--)
		strans[n - i + (symbol != '\0')] = ans[i] + '0';
	printf("%s", strans);
	return 0;
}

