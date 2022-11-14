#include<stdio.h>
#include<string.h>
#define n (10)
#define course_num (4)
struct Student
{
	char id[20],name[20];
	int grade[course_num+10],sum;
}tmp;
struct Class
{
	char id[20];
	int student_num;
	struct Student students[n+10];
}class1;
int main()
{
	int i,j,student_rank;
	class1.student_num=n;
	strcpy(class1.id,"AIA2206");
	for(i=1;i<=class1.student_num;i++)
	{
		scanf("%s%s",class1.students[i].id,class1.students[i].name);
		class1.students[i].sum=0;
		for(j=1;j<=course_num;j++)
		{
			scanf("%d",&class1.students[i].grade[j]);
			class1.students[i].sum+=class1.students[i].grade[j];
		}
	}
	for(i=1;i<class1.student_num;i++)
		for(j=i+1;j<=class1.student_num;j++)
			if(class1.students[i].sum<class1.students[j].sum)
			{
				tmp=class1.students[i];
				class1.students[i]=class1.students[j];
				class1.students[j]=tmp;
			}
	class1.students[0].sum=-1;
	for(i=1;i<=class1.student_num;i++)
	{
		if(class1.students[i].sum!=class1.students[i-1].sum)
			student_rank=i;
		printf("%s %s %.2lf %d\n",class1.students[i].id,class1.students[i].name,class1.students[i].sum*1./course_num,student_rank);
	}
	return 0;
}
