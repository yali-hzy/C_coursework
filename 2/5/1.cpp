#include<cstdio>
using namespace std;
int main()
{
	int a = 1, b = 1;
	a += b += 1;
	{
		int a = 10, b = 10;
		a += b += 10;
		printf("b = %d\n", b);
	}
	a *= a *= b * 10;
	printf("a = %2d\n", a);
	return 0;
}
