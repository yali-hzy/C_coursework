#include <stdio.h>
struct bicycle
{
	long num;
	char color;
	int type;
};
void main()
{
	static struct bicycle bye[ ] = { {200012, 'B', 18},
									 {970101, 'R', 12},
									 {960005, 'G', 30},
									 {981168, 'Y', 20},
									 {991688, 'W', 18} };
	int i;
	printf("number color type\n");
	printf("-------------------\n");
	for(i = 0; i < 4; i++)
		printf("%-9ld%-6c%d\n",bye[i].num,bye[i].color,bye[i].type);
}
