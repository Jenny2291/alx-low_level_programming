#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    letter = 'A';

    while (letter <= 'Z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}

