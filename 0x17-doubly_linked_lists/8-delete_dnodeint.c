#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * list_length - computes length of doubly linked list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t list_length(dlistint_t **h)
{
	size_t count = 0;
	dlistint_t *temp = *h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to first node
 * @index: index to delete at
 * Return: 1 success and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, len = 0;
	dlistint_t *temp = *head;
	dlistint_t *delete = NULL;

	len = list_length(head);
	if (*head == NULL || index > len - 1)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	delete = temp->next;
	temp->next = delete->next;
	if (delete->next != NULL)
		delete->next->prev = temp;
	free(delete);
	return (1);
}
