#include "lists.h"

/**
 * free_listint2 - frees memory
 * @head: pointer to the first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}
	*head = NULL;
}
