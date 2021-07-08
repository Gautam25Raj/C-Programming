#include <stdio.h>

int main()
{
    //C Program to Swap Two Numbers
    //In this example, you will learn to swap two numbers in C programming using two different techniques.

    double first, second, temp;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    printf("\nBefore swapping, firstNumber = %.2lf\n", first);
    printf("Before swapping, secondNumber = %.2lf", second);

    temp = first;
    first = second;
    second = temp;

    printf("\nAfter swapping, firstNumber = %.2lf\n", first);
    printf("After swapping, secondNumber = %.2lf", second);
    return 0;
}