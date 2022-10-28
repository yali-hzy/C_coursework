#include<stdio.h>
void main()
{
	int i,j;
	int a[3][4]={{1,2,3,4},{3,4,5,6},{5,6,7,8}};
	int (*arr)[4];/**/
	arr=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-2d",*(*(arr+i)+j));/**/
		printf("\n");
	}
}
