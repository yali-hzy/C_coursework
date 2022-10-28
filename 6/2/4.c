#include<stdio.h>
float calculate (float a ,float b ,float *sub);
void main()
{
	float a,b;
	float add_result, sub_result;
	scanf( "%f,%f", &a,&b);/**/
	add_result=calculate(a,b,&sub_result);
	printf("a*a+b*b=%f, a*a-b*b=%f\n", add_result, sub_result);/**/
}
float calculate (float a ,float b ,float *sub)/**/
{
	float temp; /**/
	*sub=a*a - b*b;
	temp=a*a + b*b; /**/
	return temp; /**/
}
