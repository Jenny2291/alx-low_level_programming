#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *scr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	scr = malloc(sizeof(c) * size);

	if (scr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		scr[i] = c;

	return (scr);
}
