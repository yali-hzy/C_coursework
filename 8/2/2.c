#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct node)
struct node{
	int x;
	struct node *next;
	node()
	{
		x=0;
		next=NULL;
	}
};
struct node* find_del(struct node *head,struct node **pm)
{
	struct node *p1,*p2,*pmax,*pre;
	if(head==NULL)
		return NULL;
	pmax=head;
	p1=p2=pmax;
	while(p1)
	{
		if(p1->x>pmax->x)
		{
			pre=p2;
			pmax=p1;
		}
		p2=p1;
		p1=p1->next;
	}
	if(pmax==head)
		head=pmax->next;
	else
		pre->next=pmax->next;
		*pm=pmax;
		return head;
}
void freeAll(struct node * p)
{
	if(p)
		freeAll(p->next);
	else
		return;
	free(p);
}
int main()
{
	struct node *head,*p,*ans=new node();
	struct node **pm=&ans;
	int i;
	head=NULL;
	for(i=0;i<3;i++)
	{
		p = (struct node* )malloc(LEN);
		printf("请输入零件号：");
		scanf("%d",&(p->x));
		p->next=head;
		head=p;
	}

	printf("\n零件号：");
	
	p=head;
	for(i=0;i<3;i++)
	{
		printf("%d\t",p->x);
		p=p->next;
	}
	head=find_del( head,pm);
	printf("ans=%d\n",(*pm)->x);
	for(p=head;p!=NULL;p=p->next)
		printf("%d ",p->x);
	freeAll(head);
	delete(ans);
	return 0;
}
