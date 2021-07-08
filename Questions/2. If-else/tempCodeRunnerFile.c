#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter 3 Number: ");
    scanf("%d", n1, n2, n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%d is largest: ", n1);
    }
    else if (n1 > n2 && n1 > n3)
    {
        printf("%d is largest: ", n2);
    }
    else
    {
        printf("%d is largest", n3);
    }
}