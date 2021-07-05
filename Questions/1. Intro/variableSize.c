#include <stdio.h>

int main()
{
    //C Program to Find the Size of int, float, double and char
    //In this example, you will learn to evaluate the size of each variable using sizeof operator.

    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    
    // printf("Size of int: %d bytes\n", sizeof(intType));
    // printf("Size of float: %d bytes\n", sizeof(floatType));
    // printf("Size of double: %d bytes\n", sizeof(doubleType));
    // printf("Size of char: %d byte\n", sizeof(charType));

    return 0;
}