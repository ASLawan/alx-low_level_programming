#include "hash_tables.h"

/**
 * add_item - adds a node at the beginning of chain
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
 */
hash_node_t *add_item(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	temp = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;

	return (*head);
}

/**
 * hash_table_set - adds a hash (key, value) hash table
 * @ht: pointer to the hash table
 * @key: key
 * @value: value
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_item(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
