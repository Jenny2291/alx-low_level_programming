#include <unistd.h>

/**
 * _putchar - Function to output a single character
 * @c: The character to be printed
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
