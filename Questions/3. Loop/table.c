#include <stdio.h>

int main()
{
    //C Program to Generate Multiplication Table
    //In this example, you will learn to generate the multiplication table of a number entered by the user.
    int table;

    printf("Enter Number To Print Its Table: ");
    scanf("%d", &table);

    for (int i = 1; i <= 20; i++)
    {
        printf("%d * %d = %d\n", table, i, table * i);
    }
}