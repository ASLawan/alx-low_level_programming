#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to first node
 * @index: given index for node
 *
 * Return: 1 if success and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);


}
