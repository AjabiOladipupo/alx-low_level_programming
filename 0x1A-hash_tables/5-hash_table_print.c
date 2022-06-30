#include "hash_tables.h"

/**
  * hash_table_print - This function prints a hash table
  *
  * Return: void
  * @ht: const hash_table_t ptr
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;
	char *str = NULL;

	if (!ht)
		exit(1);
	printf("{");
	str = "";
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			printf("%s'%s': '%s'", str, ptr->key, ptr->value);
			str = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
