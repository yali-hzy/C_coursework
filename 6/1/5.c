#include<stdio.h>
#define N 2
void fun(int (*p)[N], int *q, int n);
int main()
{
	int a[N][N]={{1,2},{3,4}};
	int i,b[N*N]={5,6,7,8};
	fun(a,b,N);
	for(i=0; i<N*N; i++)
		printf("%3d", b[i]);
	return 0;
}
void fun(int (*p)[N], int *q, int n)
{
	int i,j,k=0;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			q[k++]=p[i][j];
}
