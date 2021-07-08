#include <stdio.h>

int main()
{
    //C Program to Find LCM of two Numbers
    //In this example, you will learn to calculate the LCM (Lowest common multiple) of two numbers entered by the user.
    
    int n1, n2, n, lcm;

    printf("Enter 2 Positive Number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        n = n1;
    }
    else
    {
        n = n2;
    }

    while (1)
    {
        if (n % n1 == 0 && n % n2 == 0)
        {
            printf("LCM of %d and %d: %d", n1, n2, n);
            break;
        }
        n++;
    }
}