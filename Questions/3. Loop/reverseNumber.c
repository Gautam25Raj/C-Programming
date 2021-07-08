#include <stdio.h>

int main()
{
    //C Program to Reverse a Number
    //In this example, you will learn to reverse the number entered by the user.

    int num, originalNum, digit;
    int reverse = 0;

    printf("Enter Number: ");
    scanf("%d", &num);
    originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("You Entered: %d \n", originalNum);
    printf("Reverse: %d", reverse);
}