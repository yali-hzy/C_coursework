#include<stdio.h>
void main()
{
	char c;
	do{
		printf("enter a char:");

		c = getchar();
		while(c == '\r' || c == '\n')
			c = getchar();
		/*dismiss '\n'*/

		if('a'<=c&&c<='z')
			printf("%c\n",c-32); /*equals to c-'a'+'A'*/
	}while(c!='$');
}
