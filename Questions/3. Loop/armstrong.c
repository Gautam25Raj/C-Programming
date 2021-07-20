#include <stdio.h>

int main()
{
    int num, originalNumber, digit, cube, total = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);
    originalNumber = num;

    while (num != 0)
    {
        digit = num % 10;
        cube = digit * digit * digit;
        total = total + cube;
        num = num / 10;
    }

    if (total == originalNumber)
    {
        printf("%d is Armstong", originalNumber);
    }
    else
    {
        printf("%d is not Armstrong", originalNumber);
    }
}