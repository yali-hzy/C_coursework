#include<stdio.h>
int a[5]={22,33,44,55,66};
void work1()
{
	int *p;

}
void work2()
{
	int *s=&a[2],*p=&a[0];
	printf("%d\n",s-p);
}
void work3()
{
	int *s=&a[2],*p=&a[1];
	printf("%d\n",*(s+1)-*p++);
}
int main()
{
	work1();
	work2();
	work3();
	return 0;
}
