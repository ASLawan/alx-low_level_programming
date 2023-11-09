#include "lists.h"
/**
 * print_dlistint - prints doubly linked list
 * @h: pointer to first node
 * Return: number of nodes on success
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		printf("%u\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}

