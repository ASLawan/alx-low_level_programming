#include "lists.h"

/**
 * listint_len - computes length of linked list
 * @h: pointer to first node
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
