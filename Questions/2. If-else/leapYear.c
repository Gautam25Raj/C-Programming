#include <stdio.h>

int main()
{
    //C Program to Check Leap Year
    //In this example, you will learn to check whether the year entered by the user is a leap year or not.

    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    int century = year % 100;

    if (century == 0 && year % 400 == 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        // if (year % 4 == 0)
        // {
        //     printf("Its Leap Year");
        // }
        // else
        // {
        //     printf("Not Leap Year");
        // }
        year % 4 == 0 ? printf("%d is Leap Year", year) : printf("%d is Not Leap Year", year);
    }
}