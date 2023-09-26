#include "lists.h"

/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = NULL;

	while (*head != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;

		*head = current_node;
	}

	*head = prev_node;
	return (*head);
}
