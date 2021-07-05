#include <stdio.h>

int main()
{
    //C Program to Compute Quotient and Remainder
    //In this example, you will learn to find the quotient and remainder when an integer is divided by another integer.
    
    int dividend, divisor, quotient, remainder;

    printf("Enter Dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient of %d: %d \n", dividend, quotient);
    printf("Remainder of %d: %d", dividend, remainder);

    return 0;
}