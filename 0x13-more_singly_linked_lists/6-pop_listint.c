#include "lists.h"

/**
 * pop_listint - deletes head node in a linked list
 * @head: head node
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int head_data;

	if (*head == NULL)
	{
		return (0);
	}

	head_data = (*head)->n;
	new_head = (*head)->next;

	free(*head);

	*head = new_head;

	return (head_data);
}
