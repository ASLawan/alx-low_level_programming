#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * list_length - computes length
 * @h: head pointer
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
 * insert_dnodeint_at_index - inserts node and given index
 * @h: double pointer to first node
 * @idx: index to insert at
 * @n: data to insert
 * Return: address of added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1, len = 0;
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	len = list_length(h);
	if (idx > len - 1)
	{
		return (NULL);
	}
	else if (idx == 1)
	{
		new = add_dnodeint(h, n);
	}
	else if (idx == len - 1)
	{
		new = add_dnodeint_end(h, n);
	}

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;


	return (new);

}
