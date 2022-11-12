#include<stdio.h>
#include<stdlib.h>
#define NULL 0
#define LEN sizeof(struct parts)
struct parts
{
	char pname[10];
	struct parts *next;
};
void main()
{
	struct parts *head,*p;
	int i;
	head=NULL;
	for(i=0;i<3;i++)
	{
		p=(struct parts *)malloc(LEN);
		printf("请输入零件号：");
		scanf("%s",p->pname);
		p->next=head;
		head=p;
	}
	printf("\n零件号：");
	p=head;/**/
	for(i=0;i<3;i++)
	{
		printf("%s\t",p->pname);
		p=p->next;
	}
	printf("\n");
	free(head);
}
