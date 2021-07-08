#include <stdio.h>

int main()
{
    //C Program to Find the Largest Number Among Three Numbers
    //In this example, you will learn to find the largest number among the three numbers entered by the user.
    
    int n1, n2, n3;

    printf("Enter 3 Number: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d is largest", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is largest", n2);
    }
    else
    {
        printf("%d is largest", n3);
    }
}