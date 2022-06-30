#include "hash_tables.h"

/**
  * hash_table_delete - This function deletes a hash table
  *
  * Return: void
  * @ht: hash_table_t ptr
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL, *tmp = NULL;

	if (!ht)
		exit(1);
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			ptr = tmp;
			tmp = tmp->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
