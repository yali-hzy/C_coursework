#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	printf("U%d %c%c 20 20 20 20\n",rand(),rand()%26+65,rand()%26+97);
	printf("U%d %c%c 10 30 0 40\n",rand(),rand()%26+65,rand()%26+97);
	int n=8;
	for(int i=1;i<=n;i++)
	{
		printf("U%d %c%c",rand(),rand()%26+65,rand()%26+97);
		for(int i=1;i<=4;i++)
			printf(" %d",rand()%100+1);
		puts("");
	}
	return 0;
}
