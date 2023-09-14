#include "main.h"

/**
 * print_binary - prints the binary representation
<<<<<<< HEAD
 * of a number recursively
 * @n: unsigned long int.
 *
 * Return: no return.
=======
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return value. 
>>>>>>> 31cb7de451c3e596272866514c65a02e62a0f685
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
