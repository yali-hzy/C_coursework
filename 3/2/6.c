/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 6
Date: 2022.10.13
*/

#include<stdio.h>
int a[20],b[20];

int main()
{
	int i;

	a[1]=8;
	b[1]=1;
	for(i=2;i<=10;i++)
	{
		b[i]=b[i-1]+3;
		a[i]=a[i-1]+b[i];
	}

	int sum=0;
	for(i=1;i<=10;i++)
		sum+=a[i];
	
	printf("The sum is %d\n",sum);
	return 0;
}
