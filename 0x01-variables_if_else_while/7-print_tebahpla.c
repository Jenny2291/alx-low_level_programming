#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * follow by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
    char ch;

    while (ch = 'z': ch >= 'a': ch--)
    {
        putchar(ch);
        letter--;
    }

    putchar('\n');

    return 0;
}

