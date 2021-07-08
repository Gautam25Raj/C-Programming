#include <stdio.h>
#include <math.h>

int main()
{
    //C Program to Find the Roots of a Quadratic Equation
    //In this example, you will learn to find the roots of a quadratic equation in C programming.
    
    double a, b, c;
    double quad1, quad2;

    printf("Enter 3 Quardratic Equation Constent:");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = (b * b) - (4 * a * c);
    printf("discriminant %lf\n", discriminant);

    if (discriminant > 0)
    {
        quad1 = (-b + sqrt(discriminant)) / (2 * a);

        quad2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Discriminant is greater than 0, so the roots are real and different.\n");
        printf("Two Roots are: %.2lf %.2lf", quad1, quad2);
    }
    else if (discriminant == 0)
    {
        quad1 = -b / (2 * a);
        quad2 = quad1;

        printf("Discriminant is equal to 0, so the roots are real and equal.\n");
        printf("root1 = root2 = %.2lf", quad1);
    }
    else
    {
        double real = -b / (2 * a);
        double imaginary = sqrt(-discriminant) / (2 * a);

        printf("Discriminant is less than 0, so the roots are complex and different.\n");
        printf("Two Roots are: %.2lf+%.2lfi %.2lf-%.2lfi", real, imaginary, real, imaginary);
    }
}