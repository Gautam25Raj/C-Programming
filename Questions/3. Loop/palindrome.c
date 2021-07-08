#include <stdio.h>

int main()
{
    //C Program to Check Whether a Number is Palindrome or Not
    //In this example, you will learn to check whether the number entered by the user is a palindrome or not.

    int num, reverse = 0, digit;

    printf("Enter Number: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reverse)
    {
        printf("%d is palindrome", originalNum);
    }
    else
    {
        printf("%d is not palindrome", originalNum);
    }
}