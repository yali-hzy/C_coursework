#include<stdio.h>
void swap(int *p1,int *p2);
main()
{
	int a,b,c;
	scanf("%d, %d, %d", &a, &b, &c); /*here*/
	if(a<b) swap(&a,&b); /**/
	if(b<c) swap(&b,&c); /**/
	if(a<b) swap(&a,&b); /**/
	printf("%d\n%d\n%d\n", a, b, c); /*here*/
}
void swap(int *p1, int *p2)
{
	int temp;/**/
	temp=*p1;/**/
	*p1=*p2;/**/
	*p2=temp;/**/
}
