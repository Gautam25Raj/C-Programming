#include <stdio.h>

int main()
{
    //C Program to Check Whether a Number is Even or Odd
    //In this example, you will learn to check whether a number entered by the user is even or odd.
    
    int num;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Numver is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}