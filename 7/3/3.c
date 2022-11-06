#include<stdio.h>
#include<malloc.h>
void main()
{
	char *p;
	if ((p = (char *)malloc(100)) == NULL)
	{
		printf ("malloc memory fail!\n");
		return;
	}
	printf("%p\n",p);
	free(p);
}
