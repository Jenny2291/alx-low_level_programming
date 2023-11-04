#include "hash_table.h"

/**
 * hash_table_creat - creat a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table;
		hash_node_t **array;
		unsigned long int i;

		table = malloc(sizeof(hash_table_t));
		if (table == Null)
			return (Null);

		array = malloc(sizeof(hash_node_t *) * size);
		if (array == NUll)
				return (NULL);

		for (i = 0; i < size; i++)
				array[i] = NULL;

		table->array = arry;
		table->size = size;

		return (table);
}