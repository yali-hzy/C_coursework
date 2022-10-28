/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 13
Create Date: 2022.10.13
*/

#include<stdio.h>

int main()
{
    long int fac[20],i;/* fac stands for factorial */

    fac[0]=1;
    for(i = 1; i <= 10; i ++)
        fac[i] = fac[i-1] * i;
    
    for(i = 1; i <= 10; i ++)
        printf("%2ld! = %ld\n",i,fac[i]);/* aligned at '=' */

    return 0;
}
