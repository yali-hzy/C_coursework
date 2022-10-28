/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 3
Date: 2022.10.13
*/

#include<stdio.h>

int main()
{
	int i=1,sum=0;
	
	while(i<=100)
	{
		sum+=i;
		i++;
	}

	printf("1 + 2 + ... + 100 = %d\n",sum);
	return 0;
}
