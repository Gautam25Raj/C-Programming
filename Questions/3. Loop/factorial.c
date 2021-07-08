#include <stdio.h>

int main()
{
    //C Program to Generate Multiplication Table
    //In this example, you will learn to generate the multiplication table of a number entered by the user.
    
    int num;
    long long fact = 1;

    printf("Enter an Interger: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d: %lld", num, fact);
}