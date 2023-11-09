#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at given index
 * @head: pointer to first node
 * @index: index to return node from
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;
	int flag = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			flag = 1;
			break;
		}
		temp = temp->next;
		i++;
	}
	if (flag == 1)
	{
		return (temp);
	}
	return (NULL);
}
