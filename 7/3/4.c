#include <stdio.h>
#define N 5
Count (char *str,int *result);
main ()
{
	char string[N][80]={'\0'};
	int i;
	int Capital_Count=0,Num_Count=0;
	for(i=0;i<N;i++)
		scanf( "%s" ,string[i]);
	for(i=0;i<N;i++)
		Capital_Count+=Count(string[i],&Num_Count);
	printf( "Capital Count :=%d,numbercount=%d\n"	\
			,Capital_Count,Num_Count);
	return 0;
}
Count (char *str,int *result)
{
	int temp=0,i;
	for(i=0;i<80;i++)
	{
		if (str[i]>='A' && str[i]<='Z' )
			temp++;
		if (str[i]>='0' && str[i]<='9')
			(*result)++;
	}
	return temp;
}
