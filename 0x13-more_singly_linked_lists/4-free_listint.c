#include "lists.h"

/**
 * free_listint - frees memory
 * @head: pointer to the first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
