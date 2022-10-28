#include<stdio.h>
int main()
{
	char grade;
	int i;
	scanf("%d",&i);
	if(i >= 90)
	{
		grade= 'A';
	}
	else if(i>=70)
	{
		grade= 'B';
	}
	else if(i>=60)
	{
		grade= 'C';
	}
	else
	{
		grade= 'D';
	}
	printf("%c",grade);
	return 0;
}
