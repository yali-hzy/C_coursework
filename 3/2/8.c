/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 8
Create Date: 2022.10.13
*/

#include<stdio.h>

int a[20];

int main()
{
    int x, len=0, i;
    puts("Please input a positive integer x which is less than 5 digits in decimal.");
    scanf("%d",&x);

    /*
     For example, in the following program.
    x=24678 will be converted into 8, 7, 6, 4, 2 seperately
    and asigned to a[1] to a[5].
    */
    while(x)
    {
        /*
         The following 2 lines is equivalent to "a[++len] = x % 10;",
        but writen apart to avoid ambiguity.
        */
        len++;
        a[len] = x % 10;
        x /= 10;
    }

    printf("x has %d digit(s) in decimal.\n",len);

    /* The digit(s) is stored in a[i] in reverse order. */
    puts("Each digit is:");
    for(i = len; i >= 1; i --)
        printf("%d ",a[i]);/* A space is between each digit. */

    puts("\nOutput x in reverse order:");
    for(i = 1; i <= len; i ++)
        printf("%d",a[i]);/* No space between each digit. */

    return 0;
}
