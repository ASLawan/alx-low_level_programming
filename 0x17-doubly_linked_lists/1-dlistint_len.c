#include "lists.h"
/**
 * dlistint_len - computes length of a doubly linked list
 * @h: point to first node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
