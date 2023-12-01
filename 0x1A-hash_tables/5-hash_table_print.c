#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;
	char *delim;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	delim = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delim, temp->key, temp->value);
			delim = ", ";
			temp = temp->next;
		}
	}

	printf("}\n");
}
