#include <stdio.h>

int main()
{
    //C Program to Print an Integer (Entered by the User)
    //In this example, the integer entered by the user is stored in a variable and printed on the screen.
    int num;

    printf("Enter an Integer:");
    scanf("%d", &num);

    printf("You Entered: %d", num);

    return 0;
}