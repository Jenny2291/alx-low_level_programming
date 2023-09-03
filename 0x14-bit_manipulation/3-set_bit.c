#include "main.h"

/**
 * set _bit _ set the bt of a number to 1
 *
 * @n: pointer to the bit to be manipulated.
 * @index: position of the bit to be manipulated
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);

	return (1);
}
