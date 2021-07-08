#include <stdio.h>

int main()
{
    //C Program to Calculate the Sum of Natural Numbers
    //In this example, you will learn to calculate the sum of natural numbers entered by the user.

    int num, i;
    int sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}