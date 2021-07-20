#include <stdio.h>

int main()
{
    //C Program to Display Prime Numbers Between Two Intervals
    //In this example, you will learn to print all prime numbers between two numbers entered by the user.

    int num1, num2;
    int flag = 0;

    printf("Enter Interval: ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d is prime\n", i);
        }
    }
}