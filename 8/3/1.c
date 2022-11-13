#include<stdio.h>
struct Employee
{
	char id[30],name[30],posi[30];
	int year,wage;
};
int main()
{
	struct Employee a;
	scanf("%s%s%d%s%d",a.id,a.name,&a.year,a.posi,&a.wage);
	printf("%s\n%s\n%d\n%s\n%d\n",a.id,a.name,a.year,a.posi,a.wage);
	return 0;
}
