#include "lists.h"

/**
 * list_len - returns numner of linked list
 * elements
 * @h: pointer to first node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
