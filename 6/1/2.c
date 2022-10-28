#include<stdio.h>
void reverse(int a[],int n)
{
	int *p;
	for(p=a+n-1;p>=a;p--)
		printf("%4d",*p);
	printf("\n");
}
int main()
{
	int a[20], n;
	int i;
	printf("Input the length of array:");
	scanf("%d",&n);
	printf("Input the number of array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	reverse(a,n);
	return 0;
}
/*
5
1 4 7 3 9
*/
