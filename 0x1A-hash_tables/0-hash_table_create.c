#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 *
 * Return: hash_table_t
 * @size: unsigned long int
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;

	if (!size || size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
