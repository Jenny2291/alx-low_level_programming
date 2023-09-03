#include "main.h"

/**
 * print bi - print the binary representation of a number recursively
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n);
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) --0)
		_putchar('0');

}
