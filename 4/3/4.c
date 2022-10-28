#include<stdio.h>
int isPrime(int x)
{
	int i;
	for(i=2;i*i<=x;i++)
		if(x%i==0)
			return 0;
	if(x>1)
		return 1;
	return 0;
}
int main()
{
	int x;
	puts("Please input a natural number.");
	scanf("%d",&x);
	if(isPrime(x))
		printf("%d is a prime number.",x);
	else
		printf("%d is not a prime number.",x);
	return 0;
}
