#include <stdio.h>

int main()
{
    //C Program to Check Whether a Number is Positive or Negative
    //In this example, you will learn to check whether a number (entered by the user) is negative or positive.
    
    int num;

    printf("Enter an Integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }
}