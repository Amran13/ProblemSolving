// input 10 numbers from the users, and output the sum and avg of all numbers 

#include <stdio.h>

int main(void)
{
    int i, n, sum;
    float avg;
    sum = 0;
    printf("Input the numbers.\n");
    for(i = 1; i <= 10; i++)
    {
        printf("Number - %d : ",i);
        scanf("%d", &n);

        sum = sum + n;
    }
    
    printf("Sum is : %d \n", sum);
    printf("Avg is : %.2f ", (float) sum / 10);

}
