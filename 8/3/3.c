#include<stdio.h>
const int N=10;
struct Student
{
	char id[30],name[30];
	int gender,grade;
};
int main()
{
	struct Student students[N],*bestFemaleStudent=NULL;
	int i,n;
	char sex[N+10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%s%d",students[i].id,students[i].name,sex,&students[i].grade);
		if(strcmp(sex,"male")==0)
			students[i].gender=1;
		if(strcmp(sex,"female")==0)
			students[i].gender=0;
	}
	for(i=0;i<n;i++)
		if(!students[i].gender)
		{
			if(bestFemaleStudent==NULL || bestFemaleStudent!=NULL && bestFemaleStudent->grade<students[i].grade)
				bestFemaleStudent=&students[i];
		}
	printf("%s %s %d\n",bestFemaleStudent->id,bestFemaleStudent->name,bestFemaleStudent->grade);
	return 0;
}
