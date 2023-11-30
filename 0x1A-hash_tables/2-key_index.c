#include "hash_tables.h"
/**
 * key_index - function that returns index of a key
 * @key: key to return index for
 * @size: size of array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	if (index >= size)
	{
		index %= size;
	}

	return (index);

}
