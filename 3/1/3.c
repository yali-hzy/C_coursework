#include<stdio.h>
int main()
{
	char c;
	do{
		printf("enter a char:");
		puts("");c=getchar();while(c=='\r' || c==' ' || c=='\n')c=getchar(); /*dismiss the '\n'*/
		if('a'<=c && c<='z')
			printf("%c\n",c-32); /*equals to c-'a'+'A'*/
	}while(c!='$');
	return 0;
}
