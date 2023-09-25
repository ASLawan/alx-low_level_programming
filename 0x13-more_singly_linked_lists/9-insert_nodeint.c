#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts new node
 * at given position
 * @head: pointer to first node
 * @idx: given index
 * @n: value for the new node
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	/*traverse list to position before insertion point*/
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);

}
