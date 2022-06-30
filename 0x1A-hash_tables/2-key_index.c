#include "hash_tables.h"

/**
  * key_index - This function gives you the index of a key
  *
  * Return: unsigned long int
  * @key: const unsigned char ptr
  * @size: unsigned long int
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
