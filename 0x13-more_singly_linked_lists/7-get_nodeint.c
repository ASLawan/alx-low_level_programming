#include "lists.h"

/**
 * *get_nodeint_at_index - returns node at given index
 * @head: pointer to head node
 * @index: index of node
 *
 * Return: node at given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp  =  temp->next;
	}
	return (NULL);
}
