#include "main.h"

/**
 * flip_bits - returns the number of bits
 * needed to flip to get from one number to another
 * @n: the first unsigned longn int number.
 * @m: the second ubsigned long int number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
