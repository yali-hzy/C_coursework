#include<stdio.h>
struct std {
	int id;
	char * name;
	float sf1;
	float sf2;
};
void main()
{
	int i;
	char * s;
	float f1, f2;
	struct std a;

	i = a.id = 1998;
	s = a.name = "Windows 98";
	f1 = a.sf1 = 1.18f;
	f2 = a.sf2 = 6.0;
	printf("%d is %s\n", i, s);
	printf("%.2f\t%.2f\n", f1, f2);
}
