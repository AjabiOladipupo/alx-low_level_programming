#include "hash_tables.h"

/**
  * hash_table_set - This function adds an element to the hash table
  *
  * Return: int
  * @ht: hash_table_t ptr
  * @key: const char ptr
  * @value: const char ptr
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
