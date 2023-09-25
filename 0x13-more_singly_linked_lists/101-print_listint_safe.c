#include "lists.h"

/**
 * print_listint_safe - prints list elements
 * @head: pointer to first node
 *
 * Return: number of nodes if success, 98 otherwise
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num_nodes++;

		if (temp <= temp->next)
		{
			printf("->[%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		temp = temp->next;
	}

	return (num_nodes);
}
