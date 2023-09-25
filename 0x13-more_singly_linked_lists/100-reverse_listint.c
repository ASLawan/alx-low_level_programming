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
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
	return (*head);
}
