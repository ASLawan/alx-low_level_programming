#include "lists.h"

/**
 * free_listint_safe - frees memory
 * @h: pointer to first node
 *
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		size++;
	}

	*h = NULL;

	return (size);
}
