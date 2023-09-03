#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * index: the index of the bit to be gotten
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
