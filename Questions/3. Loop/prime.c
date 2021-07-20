#include <stdio.h>

int main()
{
    //C Program to Check Whether a Number is Prime or Not
    //In this example, you will learn to check whether an integer entered by the user is a prime number or not.

    int num;
    int flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("1 is not a prime number.");
    }
    else if (num < 0)
    {
        printf("Negative number cannot be a prime number.");
    }
    else
    {

        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Number is not prime.");
        }
        else
        {
            printf("Number is prime.");
        }
    }

    return 0;
}