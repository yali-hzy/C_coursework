#include<stdio.h>
struct Key
{
	char *keyword;
	int keyno;
};
void main()
{
	struct Key kd[3]={{"are",123},{"your",456},{"my",789}};
	struct Key *p;
	int a;
	char *str;

	p=kd;
	str=p++->keyword;
	printf("str=%s\n",str+1);

	a=++p->keyno;
	printf("a=%d\n",a);

	p=kd;
	a=p->keyno;
	printf("a=%d\n",a);
}
