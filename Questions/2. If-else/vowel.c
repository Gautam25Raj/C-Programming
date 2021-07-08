#include <stdio.h>

int main()
{
    //C Program to Check Whether a Character is a Vowel or Consonant
    //In this example, you will learn to check whether an alphabet entered by the user is a vowel or a consonant.
    char c;
    printf("Enter a Character: ");
    scanf("%d", &c);

    int lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    int upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lower || upper)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonent");
    }
}