// Write a program in C to display a pattern like a right angle triangle using an asterisk.

#include <stdio.h>

int main(void)
{
    int i, j, rows;
    printf("Input num of rows :");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("#");
        }
            printf("\n");
    }
}

