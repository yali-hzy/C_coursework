#include<cstdio>
#include<algorithm>
using namespace std;
int n,a[110];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
