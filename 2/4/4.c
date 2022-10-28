#include<stdio.h>
namespace subtask1
{
	int fun()
	{
		return 3+7%4-1;
	}
	void main()
	{
		puts("subtask1");
		printf("fun=%d\n",fun());
		puts("");
	}
};
namespace subtask2
{
	int fun1(int x,int y)
	{
		return x++/--y;
	}
	int fun2(int x,int y)
	{
		return x&y;
	}
	int fun3(int x,int y)
	{
		return x&&y;
	}
	int fun4(int x,int y)
	{
		return x|y;
	}
	int fun5(int x,int y)
	{
		return x||y;
	}
	int fun6(int x,int y)
	{
		return x>>=y-1;
	}
	int fun7(int x,int y)
	{
		return y<<=3;
	}
	int fun8(int x,int y)
	{
		return x^y;
	}
	int fun9(int x,int y)
	{
		return ~x+~y;
	}
	void main()
	{
		int x=24, y=3;
		puts("subtask2");
		printf("fun1=%d\n",fun1(x,y));
		printf("fun2=%d\n",fun2(x,y));
		printf("fun3=%d\n",fun3(x,y));
		printf("fun4=%d\n",fun4(x,y));
		printf("fun5=%d\n",fun5(x,y));
		printf("fun6=%d\n",fun6(x,y));
		printf("fun7=%d\n",fun7(x,y));
		printf("fun8=%d\n",fun8(x,y));
		printf("fun9=%d\n",fun9(x,y));
		puts("");
	}
};
namespace subtask3
{
	int fun1(int x,int y)
	{
		return x!=y<=2<x;
	}
	int fun2(int x,int y)
	{
		return (x=y)?x++:y--;
	}
	int fun3(int x,int y)
	{
		return (x==y)?x++:y--;
	}
	int fun4(int x,int y)
	{
		return x-=y*=x+3;
	}
	int fun5(int x,int y)
	{
		return x=2,y=x*++y;
	}
	void main()
	{
		int x=0, y=1;
		puts("subatsk3");
		printf("fun1=%d\n",fun1(x,y));
		printf("fun2=%d\n",fun2(x,y));
		printf("fun3=%d\n",fun3(x,y));
		printf("fun4=%d\n",fun4(x,y));
		printf("fun5=%d\n",fun5(x,y));
		puts("");
	}
};
int main()
{
	subtask1::main();
	subtask2::main();
	subtask3::main();
	return 0;
}
