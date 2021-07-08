#include <stdio.h>

int main()
{
    //C Program to Calculate the Power of a Number
    //In this example, you will learn to calculate the power of a number.

    int pow, num, power = 1;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Power: ");
    scanf("%d", &pow);

    for (int i = 1; i <= pow; i++)
    {
        power = power * num;
    }

    printf("Power: %d", power);
}