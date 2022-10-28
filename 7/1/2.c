#include<stdio.h>
#include<string.h>
void main()
{
	char ch;
	unsigned int i,j,bit,dit,n;
	long int a[20];
	char *str=" a123x456_789" ;
	for(i=0,j=0,a[0]=0,bit=0,dit=0;i<strlen(str);i++)
	{
		ch=*(str+i);
		if(ch>='0' &&ch<='9' )
		{
			a[j]*=bit;
			a[j]+=(ch-'0');
			bit=10;	dit=1;
			n=j;
		}
		else
		{
			if(dit==1)
			{
				j++;	a[j]=0;
			}
			dit=0;	bit=1;
		}
	}
	for(i=0;i<=n;i++)
		printf( "a[%d]=%d" ,i,*(a+i));
}
