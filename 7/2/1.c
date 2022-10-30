#include<stdio.h>
#include<string.h>
void sortstr(char *v[],int n);
void main()
{
	char *proname[]={"pascal","basic","cobol","prolog","lisp"};
	int i;
	sortstr(proname,5);
	for(i=0;i<5;i++)
		printf("%s\n",proname[i]);
	getchar();
}
void sortstr(char *v[],int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(v[j],v[j+1])>=0)
			{
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}
		}
	}
}
