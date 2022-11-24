#include<stdio.h>
#define N (110)

void SelectionSort(int *a, int n)
{
	int i, j, temp;
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++)
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void BubbleSort(int *a, int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
		for(j = 0; j < n - i - 1; j++)
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
}

int main()
{
	int n, i, a[N], b[N];
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for(i = 0; i < n; i++)
		b[i] = a[i];
	SelectionSort(b, n);
	for(i = 0; i < n; i++)
		printf("%d%c", b[i], i == n - 1 ? '\n' : ' ');

	for(i = 0; i < n; i++)
		b[i] = a[i];
	BubbleSort(b, n);
	for(i = 0; i < n; i++)
		printf("%d%c", b[i], i == n - 1 ? '\n' : ' ');

	return 0;
}
