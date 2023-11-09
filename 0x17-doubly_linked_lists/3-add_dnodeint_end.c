#include "lists.h"
/**
 * add_dnodeint_end - adds new node to end of list
 * @head: double pointer to first node
 * @n: data to add with node
 * Return: address of node on success or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp  = *head;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;

	return (new);
}
