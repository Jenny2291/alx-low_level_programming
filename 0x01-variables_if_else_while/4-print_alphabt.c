#include <stdio.h>
#include <stlib.h>
#include <string.h>

/**
 * main - prints the alphabet writhout q and e.
 *
 * Return; Always 0 (success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
        letter++;
    }

    putchar('\n');

    return 0;
}

