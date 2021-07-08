#include <stdio.h>

int main()
{
    //C Program to Check Whether a Character is an Alphabet or not
    //In this example, you will learn to check whether a character entered by the user is an alphabet or not.
    
    char c;

    printf("Enter a Character: ");
    scanf("%c", &c);

    if (c >= 97 && c <= 122)
    {
        printf("%c is an Alphabet", c);
    }
    else if (c >= 65 && c <= 90)
    {
        printf("%c is an Alphabet", c);
    }
    else
    {
        printf("%c is not an alphabet", c);
    }
}