#include <stdio.h>

int main()
{
    //C Program to Count Number of Digits in an Integer
    //In this example, you will learn to count the number of digits in an integer entered by the user.

    int num, digit, count = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        count++;
        num = num / 10;
    }
    
    printf("Number of digits: %d", count);
}