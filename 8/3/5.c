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
void sortStudent(struct Class class1)
{
	int i,j,student_rank;
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
	puts("");
}
void getBestStudent(struct Class class1)
{
	int i,maxSum=-1;
	for(i=1;i<=class1.student_num;i++)
		if(class1.students[i].sum>maxSum)
			maxSum=class1.students[i].sum;
	for(i=1;i<=class1.student_num;i++)
		if(class1.students[i].sum==maxSum)
			printf("%s %s %.2lf\n",class1.students[i].id,class1.students[i].name,class1.students[i].sum*1./course_num);
	puts("");
}
void getBadStudent(struct Class class1)
{
	int i;
	for(i=1;i<=class1.student_num;i++)
		if(class1.students[i].sum<60*course_num)
			printf("%s %s %.2lf\n",class1.students[i].id,class1.students[i].name,class1.students[i].sum*1./course_num);
}
int main()
{
	int i,j;
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
	sortStudent(class1);
	getBestStudent(class1);
	getBadStudent(class1);
	return 0;
}
/*
U637037663 Zy 20 20 20 20
U735224379 Wx 10 30 0 40
U1803428060 Gj 37 1 7 41
U361941987 Be 91 71 25 67
U1762516238 Ax 96 98 67 73
U885784974 Pj 99 29 23 62
U59008792 Up 25 100 54 13
U714262004 Bh 74 51 92 16
U1994687281 Tk 71 98 72 18
U1420037990 Go 58 98 17 8
*/
