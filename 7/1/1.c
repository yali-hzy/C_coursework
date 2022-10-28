#include<stdio.h>
#include<string.h>
void main()
{
	char *name[]={ "Java" ," Basical" ," windows" ," TurboC++" };
	int a,b,n=4;
	char *temp;

	for(a=0;a<n-1;a++)
		for(b=a+1;b<n;b++)
		{
			if(strcmp(name[a],name[b])<0)
			{
				temp=name[a];
				name[a]=name[b];
				name[b]=temp;
			}
		}
	for(a=1;a<n;a++)
		printf("%s\n",name[a]);
}
