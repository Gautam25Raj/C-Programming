#include <stdio.h>

int main()
{
    //C Program to Add Two Integers
    //In this example, the user is asked to enter two integers. Then, the sum of these two integers is calculated and displayed on the screen.

    int num1, num2;

    printf("Enter 2 Integer: ");
    scanf("%d  %d", &num1, &num2);

    int sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);

    return 0;
}