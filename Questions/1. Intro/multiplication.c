#include <stdio.h>

int main()
{
    //C Program to Multiply Two Floating-Point Numbers
    //In this example, the product of two floating-point numbers entered by the user is calculated and printed on the screen.
    float f1, f2, multi;

    printf("Enter 2 floating number: ");
    scanf("%f %f", &f1, &f2);

    multi = f1 * f2;

    printf("%.2f * %.2f = %.2f", f1, f2, multi);

    return 0;
}