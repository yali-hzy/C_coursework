/*
Author: Huang Ziyi
LANG: C
Task: Chapter 3 Subtask 2 Problem 10
Create Date: 2022.10.13
*/

#include<stdio.h>

int main()
{
    int i;
    puts("The number needed are:");

    for(i = 1; i <= 999; i ++)
        if(i % 3 == 0)/* i can be divided exactly by 3 */
        {
            int x = i;/* Can't operate on i otherwise it will influence the for loop */
            int flag = 0;/* stands for whether there's a digit is 5 */
            while(x)
            {
            /* the same as problem 8 */
                if(x % 10 == 5)
                    flag = 1;
                x /= 10;
            }
            if(flag)
            {
                printf("%d\n",i);
            }
        }
    
    return 0;
}
