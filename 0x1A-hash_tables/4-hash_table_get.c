#include "hash_tables.h"

/**
  * hash_table_get - This function retrieves a value associated with a key
  *
  * Return: char ptr
  * @ht: const hash_table_t ptr
  * @key: const char ptr
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
