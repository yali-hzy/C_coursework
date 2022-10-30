#include<stdio.h>
#include<string.h>
char s[110];
int main()
{
	int i;
	for(i=1;i<=3;i++)
	{
		scanf("%s",s);
		printf("Attempt %d\n",i);
		if(strcmp(s,"a123456")==0)
		{
			puts("Password Correct");
			printf("Your score is %d\n",100);
			break;
		}
		else
		{
			puts("Password Incorrect");
			printf("You still have %d chance\n",3-i);
			if(i==3)
			{
				puts("Please try again later.");
				return 0;
			}
		}
	}
	return 0;
}
