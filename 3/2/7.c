/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 7
Create Date: 2022.10.13
*/

#include<stdio.h>

int main()
{
    double x, Y;
    puts("Please input x.");
    scanf("%lf",&x);

    if(x < 1)
        Y = x;
    else
        if(x < 10)
            Y = 2 * x - 1;
        else
            Y = 3 * x - 11;
    
    printf("Y = %.6lf\n",Y);

    return 0;
}
