#include <stdio.h>

int main()
{
    //C Program to Find GCD of two Numbers
    //Examples on different ways to calculate GCD of two integers (for both positive and negative integers) using loops and decision making statements.
    int n1, n2, n, hcf;

    printf("Enter 2 Positive Number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        n = n2;
    }
    else
    {
        n = n1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d: %d", n1, n2, hcf);
}