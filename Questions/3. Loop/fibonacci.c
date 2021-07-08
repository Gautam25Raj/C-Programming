#include <stdio.h>

int main()
{
    //C Program to Display Fibonacci Sequence
    //In this example, you will learn to display the Fibonacci sequence of first n numbers (entered by the user).
    
    // int a = 0, b = 1, c;
    int a = -1, b = 1, c;
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }
}